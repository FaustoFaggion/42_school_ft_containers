#ifndef RBTREE_HPP
#define RBTREE_HPP


/*Use for ptrdiff_t*/
#include <cstddef> 

#include "RbTree_iterator.hpp"
#include "node_base.hpp"
#include "pair.hpp"

/* DELETE................USE FOR PRINT TREE*/
#include <queue>

namespace ft {

	template<typename Key, typename Val, typename KoV,
		typename Compare = std::less<Key>, typename Alloc = std::allocator<Val> >
	class RbTree {

		typedef typename Alloc::template rebind<node_tree<Val> >::other
																node_allocator;

		protected:
			
			typedef node_tree<Val>								node;
			typedef node*										node_ptr;
			typedef const node*									const_node_ptr;

		public:

			typedef RbTree										self;
			typedef Key											key_type;
			typedef Val											value_type;
			typedef value_type*									pointer;
			typedef const value_type*							const_pointer;
			typedef value_type&									reference;
			typedef const value_type&							const_reference;
			typedef size_t										size_type;
			typedef ptrdiff_t									difference_type;
			typedef Alloc										allocator_type;
			typedef RbTree_iterator<pointer, self>				iterator;
			typedef RbTree_iterator<const_pointer, self>		const_iterator;

		private: 
		
			node_ptr				_nill;
			node_ptr				_root;
			node_ptr				_left_most;
			node_ptr				_right_most;
			node_allocator			_node_alloc;
			Alloc					_alloc;
			size_type				_size;
			Compare					_comp;

		/*UTILS*/
		public:

			// void	print_tree(node_ptr node, int space)
			// {
			// 	/*Base case*/
			// 	if (node == _nill)
			// 		return;

			// 	/*Increase distance between levels*/
			// 	space += 10;
				
			// 	/*Right child first*/
			// 	print_tree(node->_right, space);
				
			// 	/*Print current node after space count*/
			// 	std::cout << "\n";
			// 	for (int i = 10; i < space; i++)
			// 		std::cout << " ";
			// 	std::cout << node->_node_value.second << ":" << node->_color;

			// 	/*Process left child*/
			// 	print_tree(node->_left, space);

			// }

		public:

			node_ptr		node_create(value_type val) {

				node_ptr	_new;

				_new = _node_alloc.allocate(1);
				_node_alloc.construct(_new, node_tree<value_type>(val));
				_new->_left = _nill;
				_new->_right = _nill;
				_new->_p =	_nill;
				return (_new);
			}

			void			tree_delete(node_ptr& node)
			{
				if (node == _nill)
					return;
				tree_delete(node->_left);
				tree_delete(node->_right);
				_node_alloc.destroy(node);
				_node_alloc.deallocate(node, sizeof(node));
			}

			void			tree_left_rotate(node_ptr new_node)
			{
				node_ptr	y = new_node->_right;

				new_node->_right = y->_left;
				if (y->_left != _nill)
					y->_left->_p = new_node;
				y->_p = new_node->_p;
				if (new_node->_p == _nill)
					_root = y;
				else if (new_node == new_node->_p->_left)
					new_node->_p->_left = y;
				else
					new_node->_p->_right = y;
				y->_left = new_node;
				new_node->_p = y;
			}

			void			tree_right_rotate(node_ptr new_node)
			{
				node_ptr	y = new_node->_left;

				new_node->_left = y->_right;
				if (y->_right != _nill)
					y->_right->_p = new_node;
				y->_p = new_node->_p;
				if (new_node->_p == _nill)
					_root = y;
				else if (new_node == new_node->_p->_right)
					new_node->_p->_right = y;
				else
					new_node->_p->_left = y;
				y->_right = new_node;
				new_node->_p = y;
			}

			void			tree_balance(node_ptr new_node)
			{
				node_ptr	y;
				int i = 0;

				while (new_node->_p->_color == RED)
				{
					i++;
					if (new_node->_p == new_node->_p->_p->_left)
					{
						y = new_node->_p->_p->_right;
						if (y->_color == RED)
						{
							new_node->_p->_color = BLACK;
							y->_color = BLACK;
							new_node->_p->_p->_color = RED;
							new_node = new_node->_p->_p;
						}
						else
						{
							if (new_node == new_node->_p->_right)
							{
								new_node = new_node->_p;
								tree_left_rotate(new_node);
							}
							new_node->_p->_color = BLACK;
							new_node->_p->_p->_color = RED;
							tree_right_rotate(new_node->_p->_p);
						}
					}
					else
					{
						y = new_node->_p->_p->_left;
						if (y->_color == RED)
						{
							new_node->_p->_color = BLACK;
							y->_color = BLACK;
							new_node->_p->_p->_color = RED;
							new_node = new_node->_p->_p;
						}
						else
						{
							if (new_node == new_node->_p->_left)
							{
								new_node = new_node->_p;
								tree_right_rotate(new_node);
							}
							new_node->_p->_color = BLACK;
							new_node->_p->_p->_color = RED;
							tree_left_rotate(new_node->_p->_p);
						}
					}
				}
				_root->_color = BLACK;
			}

			static node_ptr	tree_minimum(node_ptr ref_root)
			{
				while(ref_root->_left->_nill == false)
					ref_root = ref_root->_left;
				return (ref_root);
			}

			static node_ptr	tree_maximum(node_ptr ref_root)
			{
				while(ref_root->_right->_nill == false)
					ref_root = ref_root->_right;
				return (ref_root);
			}
			
			node_ptr		tree_search(const key_type k)
			{
				node_ptr	x = _root;
				node_ptr	y = _nill;

				while (x != _nill)
				{
					y = x;
					if (_comp(k, x->_node_value.first))
						x = x->_left;
					else if (_comp(x->_node_value.first, k))
						x = x->_right;
					else
						return(y);
				}
				return (_nill);
			}

			static node_ptr	tree_sucessor(node_ptr next)
			{
				if (next->_right->_nill == false)
					return (tree_minimum(next->_right));
				else
				{
					node_ptr i = next->_p;
					while (i->_nill == false && next == i->_right)
					{
						next = i;
						i = i->_p;
					}
					return (i);
				}
			}

			static node_ptr	tree_predecessor(node_ptr next)
			{
				if (next->_left->_nill == false)
					return (maximum(next->_left));
				else
				{
					node_ptr i = next->_p;
					while (i->_nill == false && next == i->_left)
					{
						next = i;
						i = i->_p;
					}
					return (i);
				}
			}

			void			tree_transplant(node_ptr u, node_ptr v)
			{
				if (u->_p == _nill)
					_root = v;
				else if (u == u->_p->_left)
					u->_p->_left = v;
				else
					u->_p->_right = v;
				if (v != _nill)
					v->_p = u->_p;
			}

			void			tree_node_delete(node_ptr z)
			{
				node_ptr	y;
				node_ptr	x;
				node_color	c;
				
				y = z;
				c = y->_color;
				if (z->_left == _nill)
				{
					x = z->_right;
					tree_transplant(z, z->_right);	//replace z by its right child
				}
				else if (z->_right == _nill)
				{
					x = z->_left;
					tree_transplant(z, z->_left);	//replace z by its left child
				}
				else
				{
					y = tree_minimum(z->_right);			// y is z's successor
					c = y->_color;
					x = y->_right;
					if (y != z->_right)						//is y father down the tree?
					{
						tree_transplant(y, y->_right);	//replace y by its right child
						y->_right = z->_right;			//z's right child becomes y's right child
						y->_right->_p = y;
					}
					else
					{
						x->_p = y;
					}
					tree_transplant(z, y);				//replace z by it's successor y
					y->_left = z->_left;				//z's left child to y
					y->_left->_p = y;
					y->_color = z->_color;
				}
				if (c == BLACK)
					tree_delete_balance(x);

			}

			void		tree_delete_balance(node_ptr x)
			{
				while ( x != _root && x->_color == BLACK)
				{
					node_ptr	w;

					if (x == x->_p->_left)
					{
						w = x->_p->_right;
						if (w->_color == RED)
						{
							w->_color = BLACK;
							x->_p->_color = RED;
							tree_left_rotate(x->_p);
							w = x->_p->_right;
						}
						if (w->_left->_color == BLACK && w->_right->_color == BLACK)
						{
							w->_color = RED;
							x = x->_p;
						}
						else
						{
							if (w->_right->_color == BLACK)
							{
								w->_left->_color = BLACK;
								w->_color = RED;
								tree_right_rotate(w);
								w = x->_p->_right;
							}
							w->_color = x->_p->_color;
							x->_p->_color = BLACK;
							w->_right->_color = BLACK;
							tree_left_rotate(x->_p);
							x = _root;
						}
					}
					else
					{
						w = x->_p->_left;
						if (w->_color == RED)
						{
							w->_color = BLACK;
							x->_p->_color = RED;
							tree_right_rotate(x->_p);
							w = x->_p->_left;
						}
						if (w->_right->_color == BLACK && w->_left->_color == BLACK)
						{
							w->_color = RED;
							x = x->_p;
						}
						else
						{
							if (w->_left->_color == BLACK)
							{
								w->_right->_color = BLACK;
								w->_color = RED;
								tree_left_rotate(w);
								w = x->_p->_left;
							}
							w->_color = x->_p->_color;
							x->_p->_color = BLACK;
							w->_left->_color = BLACK;
							tree_right_rotate(x->_p);
							x = _root;
						}
					}
				}
				x->_color = BLACK;
			}

		public:

		/*CONSTRUCTORS*/
			// RbTree(void) { };
			
			explicit RbTree(const Compare& comp = Compare(),
								const allocator_type& alloc = allocator_type())
			{
				// std::cout << "RbTree default constructor called" << std::endl;
				_alloc = alloc;
				_comp = comp;
				_size = 0;
				
				_nill = _node_alloc.allocate(1);
				_node_alloc.construct(_nill, node_tree<value_type>());
				_nill->_color = BLACK;
				_nill->_p =	_nill;
				_nill->_left = _nill;
				_nill->_right = _nill;
				_nill->_nill = true;
				
				_root = _nill;
	//			_root->_p = _nill;
				_left_most = _nill;
				_right_most = _nill;
			};

			RbTree(RbTree const &rsc)
			{
				// std::cout << "RbTree copy constructor called" << std::endl;
				*this = rsc;
			}

			~RbTree(void)
			{
				// std::cout << "RbTree destructor called" << std::endl;
				clear();
				_node_alloc.destroy(_nill);
				_node_alloc.deallocate(_nill, sizeof(_nill));
			};

			RbTree	&operator=(RbTree const &rsc)
			{
				// std::cout << "RbTree operator = called" << std::endl;
				this->clear();
				_alloc = rsc._alloc;
				_comp = rsc._comp;
				_node_alloc = rsc._node_alloc;
				this->insert(rsc.begin(), rsc.end());

				return (*this);
			}

		/*ALLOCATOR*/
			allocator_type get_allocator() const
			{
				return (this->_node_alloc);
			}

		/*ITERATORS*/

			iterator				begin(void)
			{
				_left_most = tree_minimum(_root);
				return (iterator(tree_minimum(_root)));
			}

			const_iterator			begin(void) const
			{
				return (const_iterator(tree_minimum(_root)));
			}

			iterator				end(void)
			{
				_right_most = tree_maximum(_root);
				return (iterator(_nill));
			}

			const_iterator			end(void) const
			{
				return (const_iterator(_nill));
			}

		/*CAPACITY*/
			size_type				size(void) {return(_size);}
			
			bool					empty() const
			{
				if (_root == _nill)
					return (true);
				return (false);
			}
	
			size_type				max_size() const
			{
				return (_node_alloc.max_size());
			}

		/*ELEMENT ACCESS*/


		/*MODIFIERS*/
			pair<iterator, bool>	insert(const value_type& val)
			{
				node_ptr	x = _root;
				node_ptr	y = _nill;
				node_ptr	new_node;


				while (x != _nill)
				{
					y = x;
					if (_comp(val.first, x->_node_value.first))
						x = x->_left;
					else if (_comp(x->_node_value.first, val.first))
						x = x->_right;
					else
						return(pair<iterator, bool>(iterator(y), false));
				}

				new_node = node_create(val);
				new_node->_p = y;
				if (y == _nill)
					_root = new_node;
				else
				{ 
					if (_comp(new_node->_node_value.first, y->_node_value.first)) 
						y->_left = new_node;
					else
					y->_right = new_node;
				}
				tree_balance(new_node);
				_size++;
				return (pair<iterator, bool>(iterator(new_node), true));
			}

			iterator 				insert (iterator position, const value_type& val)
			{
				if (position == iterator(_nill) || position == iterator(_right_most))
				{
					if (this->_size > 0 && _comp(_right_most->_node_value.first, val.first))
					std::cout << "aaaaaaaaaaaaaaaaa\n" << val.first << "\n";
				}
				else
					std::cout << "bbbbbbbbbbbbbbbbbb\n";
				
				return (iterator(_nill));
			}

			template <class InputIterator>
			void 					insert(InputIterator first, InputIterator last)
			{
				for (; first != last; first++)
				{
					insert(*first);
				}
			}

			void					clear()
			{
				tree_delete(_root);
				_root = _nill;
				_size = 0;
			}
	
			size_type 				erase (const key_type& k)
			{
				node_ptr	tmp;

				tmp = tree_search(k);
				if (tmp != _nill)
					tree_node_delete(tmp);
				
				delete tmp;
				return (1);
			}

			void erase (iterator position)
			{
				node_ptr	tmp;
				key_type	key;
				
				key = position->first;
				tmp = tree_search(key);
				if (tmp != _nill)
					tree_node_delete(tmp);
				delete tmp;
			}

		/*OPERATORS*/
			iterator 				find (const key_type& k)
			{
				iterator	_find;

				_find = iterator(this->tree_search(k));
				if (_find->first == k)
					return (_find);
				return (this->end());
			}

			const_iterator 			find (const key_type& k) const
			{
				iterator	_find;

				_find = iterator(this->tree_search(k));
				if (_find->first == k)
					return (_find);
				return (this->end());
			}
	};
};

#endif