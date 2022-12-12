#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

#include "iterator.hpp"

namespace ft {

	template<typename iT>
	class random_access_iterator : public iterator<std::random_access_iterator_tag, iT> {

		public:
			
			typedef iT												iterator_type;
			typedef typename iterator_traits<iT>::value_type		value_type;
			typedef typename iterator_traits<iT>::difference_type	difference_type;
			typedef typename iterator_traits<iT>::pointer			pointer;
			typedef typename iterator_traits<iT>::reference			reference;
			typedef typename iterator_traits<iT>::iterator_category	iterator_category;

		private:
			iterator_type	mPtr;

		public:

//		Constructors:

			random_access_iterator(void) : mPtr(NULL) { };
			explicit random_access_iterator(const iterator_type &rsc) : mPtr(rsc) { };
			~random_access_iterator() { }; 

			const random_access_iterator	&operator=(random_access_iterator const &rsc) {
				this->mPtr = rsc.getPtr();
				return (*this);
			}

			iterator_type	getPtr(void) { return (this->mPtr);};

//		Operators:

			bool	operator==(random_access_iterator &rsc) const{ 
				return (this->mPtr == rsc.getPtr());
			};

			bool	operator!=(random_access_iterator &rsc) const{ 
				return (this->mPtr != rsc.getPtr());
			};
			
			reference	operator*(void) { return (*mPtr);};
	};

};
#endif