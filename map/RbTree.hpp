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
/*
		protected:

			template<typename key_compare>
			struct _tree_impl: public node_allocator
			{
				key_compare		m_key_compare;
				node_base		m_header;
				size_type		size;
				
				_tree_impl(const node_allocator& _alloc = node_allocator(),
					const key_compare& _comp = key_compare()) : 
					node_allocator(_alloc), m_key_compare(_comp), size(0)
				{
					this->m_header._collor = RED;
					this->m_header._p = 0;
					this->m_header._left = &this->m_header;
					this->m_header._right = &this->m_header;
				}
			};
*/

		node_ptr				_nill;
		node_ptr				_root;
		node_allocator			_node_alloc;
		Alloc					_alloc;
		size_type				_size;
		Compare					_comp;

		/*CONSTRUCTORS*/
		public:

			RbTree(const Compare& comp = Compare(), const allocator_type& alloc = allocator_type())
			{
				_alloc = alloc;
				_comp = comp;
				_nill = _node_alloc.allocate(1);
				_root = NULL;
				_size = 0;
			};


		/*CAPACITY*/
			size_type	size(void) {return(_size);};

			node_ptr	insert(value_type val) {
				
				if (_root == NULL) {
					_root = _node_alloc.allocate(1);
					_root->_node_value = val;
					/*node header*/
					_root->_color = BLACK;
					_root->_left = _nill;
					_root->_right = _nill;
					_root->_p = _nill;
					_size++;
				}

				return (_root);
			}
	};


};

#endif