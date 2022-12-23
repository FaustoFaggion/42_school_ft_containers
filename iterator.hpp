#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <iterator>
#include <cstddef>

namespace ft {

//	enable_if

	template< bool Condition, class T = void >
	struct enable_if {
	};

	template<class T>
	struct enable_if<true, T> { 
		typedef T type;
	};


	//template <class T, T v>
	//struct integral_constant {
	//	static const T value = v;
		// typedef T value_type;
		// typedef integral_constant<T,v> type;
		// operator T() const{ return v; };
//	};

	template<typename T>
	struct is_integral {
		static const bool value = false;
	};
	
	template<>
	struct is_integral<int> {
		static const bool value = true;
	};

//	iterator_traits:

	template <class Category, class T, class Distance = ptrdiff_t, 
		class Pointer = T*, class Reference = T&>
	struct iterator {
		typedef T         value_type;
		typedef Distance  difference_type;
		typedef Pointer   pointer;
		typedef Reference reference;
		typedef Category  iterator_category;
	};

	template <typename Iterator> 
	struct iterator_traits {
		typedef typename Iterator::difference_type		difference_type;
		typedef typename Iterator::value_type			value_type;
		typedef typename Iterator::pointer				pointer;
		typedef typename Iterator::reference			reference;
		typedef typename Iterator::iterator_category	iterator_category;
	};
	
	template <typename T>
	struct iterator_traits<T*> {
		typedef ptrdiff_t					difference_type;
		typedef T								value_type;
		typedef T*								pointer;
		typedef T&								reference;
		typedef std::random_access_iterator_tag	iterator_category;
	};
	
	template <typename T> 
	class iterator_traits<T const*> {
		typedef ptrdiff_t					difference_type;
		typedef T								value_type;
		typedef const T*						pointer;
		typedef const T&						reference;
		typedef std::random_access_iterator_tag	iterator_category;
	};

};

#endif