#ifndef RBTREE_HPP
#define RBTREE_HPP


#include <cstddef> /*ptrdiff_t*/
#include "RbTree_iterator.hpp"
#include "node_base.hpp"

namespace ft {

	template<typename Key, typename Val, typename KoV,
		typename Compare = std::less<Key>, typename Alloc = std::allocator<Val> >
	class RbTree {

		typedef typename Alloc::template rebind<node_tree<Val> >::other
																node_allocator;

		protected:

			typedef node_tree<Val>					node;
			typedef node*							node_ptr;
			typedef const node*						const_node_ptr;

		public:
			typedef Key								key_type;
			typedef Val								value_type;
			typedef value_type*						pointer;
			typedef const value_type*				const_pointer;
			typedef value_type&						reference;
			typedef const value_type&				const_reference;
			typedef size_t							size_type;
			typedef ptrdiff_t						difference_type;
			typedef Alloc							allocator_type;
			typedef RbTree_iterator<value_type>		iterator;

		node_ptr				_nill;
		node_ptr				_root;
		node_allocator			_node_alloc;
		Alloc					_alloc;
		size_type				_size;
		Compare					_comp;

		/*UTILS*/
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
				_nill->_left = _nill;
				_nill->_right = _nill;
				_nill->_p =	_nill;
				_root = _nill;
			};

			~RbTree(void)
			{
				std::cout << "RbTree destructor called" << std::endl;
				clear();
				_node_alloc.destroy(_nill);
				_node_alloc.deallocate(_nill, sizeof(_nill));
			};

		/*CAPACITY*/
			size_type	size(void) {return(_size);};

			node_ptr	insert(value_type val)
			{
				node_ptr	x = _root;
				node_ptr	y = _nill;
				node_ptr	new_node;


				while (x != _nill)
				{
					y = x;
					if (val.first < x->_node_value.first)
						x = x->_left;
					else
						x = x->_right;
				}

				if (y == _nill)
					_root = node_create(val);
				else
				{ 
					new_node = node_create(val);
					new_node->_p = y;
					if (new_node->_node_value.first < y->_node_value.first) 
						y->_left = new_node;
					else
					y->_right = new_node;
				}

				return (_root);
			}

			void	clear(){
				
					_node_alloc.destroy(_root);
					_node_alloc.deallocate(_root, sizeof(_root));

					_root = NULL;
				}
	};
};

#endif