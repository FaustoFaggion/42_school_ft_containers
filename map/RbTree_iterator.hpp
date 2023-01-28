#ifndef RBTREE_ITERATOR_HPP
#define RBTREE_ITERATOR_HPP

#include <cstddef> /*ptrdiff_t*/
#include "iterator_traits.hpp"
#include <iterator>
#include <algorithm>
#include "node_base.hpp"

namespace ft {

	template<typename iT>
	class RbTree_iterator {

		private:

			typedef iT												iterator_type;
			typedef typename iterator_traits<iT>::value_type		value_type;
			typedef typename iterator_traits<iT>::difference_type	difference_type;
			typedef typename iterator_traits<iT>::pointer			pointer;
			typedef typename iterator_traits<iT>::reference			reference;
			typedef typename iterator_traits<iT>::iterator_category	iterator_category;
		
		protected:
			iterator_type	_current;

		public:

		RbTree_iterator(void) : _current(NULL) { };
			explicit RbTree_iterator(const iterator_type &rsc) : _current(rsc) { };

		/*OPERATORS*/

			reference	operator*(void) { return (*_current);};
			pointer		operator->(void) { return (_current);};// &(*_current)
	};
};


#endif