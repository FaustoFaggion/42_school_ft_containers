#ifndef RBTREE_ITERATOR_HPP
#define RBTREE_ITERATOR_HPP

#include "iterator_traits.hpp"

namespace ft {

	template<typename iT>
	class RbTree_iterator : public iterator<std::random_access_iterator_tag, iT> {

		private:
			typedef RbTree_iterator<iT>								self;
		
		public:

			typedef iT												iterator_type;
			typedef typename iterator_traits<iT>::value_type		value_type;
			typedef typename iterator_traits<iT>::difference_type	difference_type;
			typedef typename iterator_traits<iT>::pointer			pointer;
			typedef typename iterator_traits<iT>::reference			reference;
			typedef typename iterator_traits<iT>::iterator_category	iterator_category;

		protected:
			iterator_type	_current;

		public:

//		Constructors:

			RbTree_iterator(void) : _current(NULL) { };
			explicit RbTree_iterator(const iterator_type &rsc) : _current(rsc) { };
			RbTree_iterator(self const &rsc) {*this = rsc;}
			~RbTree_iterator(void) { }; 

			self	&operator=(self const &rsc) {
				this->_current = rsc.getCurrent();
				return (*this);
			}

			iterator_type	getCurrent(void) const { return (this->_current);};
	};
};


#endif