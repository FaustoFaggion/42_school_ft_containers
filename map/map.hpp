#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <utility>
#include <exception>

namespace ft
{
	template<typename Key, typename T, class Compare = std::less<Key>, class Alloc = std::allocator<std::pair<const Key, T> > >
	class map {

		private:
			typedef	map<Key, T, Compare, Alloc>		map_type;
		public:
			typedef Alloc							allocator_type;
			typedef Key								key_type;
			typedef T								mapped_type;
			typedef std:pair<const Key, T>			value_type;
			typedef Compare							key_compare;

		private:
			key_type		_key;
			allocator_type	_alloc;

		public:
		//	Constructor:
		
			explicity map(const key_compare& comp = key_compare,
				const allocator_type& alloc = allocator_type()) { }
			


	};



};

#endif