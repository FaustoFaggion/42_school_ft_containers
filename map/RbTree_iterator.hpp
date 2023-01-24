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

			typedef iT									iterator_type;
			typedef iT&									iterator_reference;
			typedef iT*									iterator_pointer;
			typedef std::bidirectional_iterator_tag		iterator_category;
			typedef ptrdiff_t							difference_type;
			typedef RbTree_iterator<iT>					self;
			typedef node_tree<iT>*						node_ptr;
		
		public:
	};
};


#endif