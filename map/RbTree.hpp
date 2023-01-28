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

			typedef node_tree<Val>						node;
			typedef node*								node_ptr;
			typedef const node*							const_node_ptr;

		public:
			typedef Key									key_type;
			typedef Val									value_type;
			typedef value_type*							pointer;
			typedef const value_type*					const_pointer;
			typedef value_type&							reference;
			typedef const value_type&					const_reference;
			typedef size_t								size_type;
			typedef ptrdiff_t							difference_type;
			typedef Alloc								allocator_type;
			typedef RbTree_iterator<node_ptr>			iterator;
			typedef RbTree_iterator<const_node_ptr>		const_iterator;

		node_ptr				_nill;
		node_ptr				_root;
		node_allocator			_node_alloc;
		Alloc					_alloc;
		size_type				_size;
		Compare					_comp;

		/*UTILS*/
		public:

			void	print_tree(node_ptr node, int space)
			{
				/*Base case*/
				if (node == _nill)
					return;

				/*Increase distance between levels*/
				space += 10;
				
				/*Right child first*/
				print_tree(node->_right, space);
				
				/*Print current node after space count*/
				std::cout << "\n";
				for (int i = 10; i < space; i++)
					std::cout << " ";
				std::cout << node->_node_value.second << ":" << node->_color;

				/*Process left child*/
				print_tree(node->_left, space);

			}

		private:

			node_ptr	node_create(value_type val) {

				node_ptr	_new;

				_new = _node_alloc.allocate(1);
				_node_alloc.construct(_new, node_tree<value_type>(val));
				_new->_left = _nill;
				_new->_right = _nill;
				_new->_p =	_nill;
				return (_new);
			}

			void	delete_tree(node_ptr& node)
			{
				if (node == _nill)
					return;
				delete_tree(node->_left);
				delete_tree(node->_right);
				_node_alloc.destroy(node);
				_node_alloc.deallocate(node, sizeof(node));
			}

			void	left_rotate(node_ptr new_node)
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

			void	right_rotate(node_ptr new_node)
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

			void	tree_balance(node_ptr new_node)
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
								left_rotate(new_node);
							}
							new_node->_p->_color = BLACK;
							new_node->_p->_p->_color = RED;
							right_rotate(new_node->_p->_p);
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
								right_rotate(new_node);
							}
							new_node->_p->_color = BLACK;
							new_node->_p->_p->_color = RED;
							left_rotate(new_node->_p->_p);
						}
					}
				}
				_root->_color = BLACK;
			}

		public:

		/*CONSTRUCTORS*/
			RbTree(const Compare& comp = Compare(),
								const allocator_type& alloc = allocator_type())
			{
				std::cout << "RbTree default constructor called" << std::endl;
				_alloc = alloc;
				_comp = comp;
				_size = 0;
				_nill = _node_alloc.allocate(1);
				_node_alloc.construct(_nill, node_tree<value_type>());
				_nill->_color = BLACK;
				_nill->_p =	_nill;
				_nill->_left = _nill;
				_nill->_right = _nill;
				_root = _nill;
			};

			~RbTree(void)
			{
				std::cout << "RbTree destructor called" << std::endl;
				clear();
				_node_alloc.destroy(_nill);
				_node_alloc.deallocate(_nill, sizeof(_nill));
			};

		/*ITERATORS*/

			iterator				begin(void) { return (iterator(_root)); }
			const_iterator			begin(void) const { return (const_iterator(_root)); }

		/*CAPACITY*/
			size_type	size(void) {return(_size);};

			pair<iterator, bool>	insert(const value_type& val)
			{
				node_ptr	x = _root;
				node_ptr	y = _nill;
				node_ptr	new_node;


				while (x != _nill)
				{
					y = x;
					if (val.first < x->_node_value.first)
						x = x->_left;
					else if (val.first > x->_node_value.first)
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
					if (new_node->_node_value.first < y->_node_value.first) 
						y->_left = new_node;
					else
					y->_right = new_node;
				}
				tree_balance(new_node);
				return (pair<iterator, bool>(iterator(new_node), true));
			}

			void	clear()
			{
				delete_tree(_root);
				_root = NULL;
			}
	};
};

#endif