#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

#include "iterator.hpp"

namespace ft {

template<typename iT>
class random_access_iterator : public std::iterator<random_access_iterator_tag, iT> {

	public:
		typedef typename iterator_traits::difference_type	difference_type;
		typedef iT											value_type;
		typedef iterator_traits::pointer					pointer;
		typedef iterator_traits::reference					reference;
		typedef iterator_traits::iterator_category			iterator_category;

	private:
		pointer	mPtr;

	public:
		random_access_iterator() : mPtr(NULL) { };
		random_access_iterator(pointer ptr) : mPtr(ptr) { };
}




};
#endif