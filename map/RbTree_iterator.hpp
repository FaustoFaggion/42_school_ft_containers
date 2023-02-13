#ifndef RBTREE_ITERATOR_HPP
#define RBTREE_ITERATOR_HPP

#include <cstddef> /*ptrdiff_t*/
#include "iterator_traits.hpp"
#include <iterator>
#include <algorithm>
#include "node_base.hpp"

namespace ft {

	template<typename iT>
	class RbTree_iterator : public iterator<std::bidirectional_iterator_tag, iT> {

		private:

			typedef node_tree<iT>										node;
			typedef node*												node_ptr;
			typedef const node*											const_node_ptr;

			typedef iT													iterator_type;
			typedef typename iterator_traits<iT*>::value_type			value_type;
			typedef typename iterator_traits<iT*>::difference_type		difference_type;
			typedef typename iterator_traits<iT*>::pointer				pointer;
			typedef typename iterator_traits<iT*>::reference			reference;
			typedef typename iterator_traits<iT*>::iterator_category	iterator_category;
			typedef RbTree_iterator										self;
		
		public:
		
			node_ptr	_current;

		public:

			RbTree_iterator(void) : _current(NULL) { };
			explicit RbTree_iterator(node_ptr rsc) : _current(rsc) { };


		/*OPERATORS*/

			reference	operator*(void) { return (_current->_node_value);};
			pointer		operator->(void) { return &(_current->_node_value);};// &(*_current)
	};
};


#endif