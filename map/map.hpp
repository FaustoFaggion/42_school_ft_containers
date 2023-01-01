#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include "bidirectional_iterator.hpp"
#include "reverse_iterator.hpp"
#include <exception>
#include "integral_type_traits.hpp"

namespace ft
{
	template<typename Key, typename T, class Compare = less<Key>, class Alloc = std::allocator<pair<const Key, T> >
	class map {

		private:
			typedef	map<Key, T, Compare, Alloc>		map_type;
		public:
			typedef Key								key_type;
			typedef T								mapped_type;
			typedef std:pair<const Key, T>			value_type;
			typedef Compare							key_compare;

	}

}

#endif