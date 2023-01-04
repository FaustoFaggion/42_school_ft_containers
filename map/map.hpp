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
			typedef Key								key_type;
			typedef T								mapped_type;
			typedef std::pair<const Key, T>			value_type;
			typedef Compare							key_compare;

			class value_compare : public std::binary_function<value_type, value_type, bool> {

				friend class map<Key, T, Compare, Alloc>;

				protected:
					Compare	comp;

			//	Constructor
				value_compare(Compare c) : comp(c) {};

				public:
					bool operator()(const value_type& lhs, const value_type& rhs) const {
						return (comp(lhs.first, rhs.first));
					}
			};

			typedef Alloc							allocator_type;

		private:
			key_type		_key;
			allocator_type	_alloc;
			value_type		_pair;
			key_compare		_comp;
		public:
		//	Constructor:
		
			explicit map(const key_compare& comp = key_compare(),
				const allocator_type& alloc = allocator_type());, 
			template<typename InputIterator>

			map(InputIterator first, InputIterator last,
				const key_compare& comp = key_compare(),
				const allocator_type& alloc = allocator_type());

			map(const map& rsc);
	};

	template<typename Key, typename T, class Compare, class Alloc>
	map<Key, T, Compare, Alloc>::map(const Compare& comp,
				const Alloc& alloc) : _comp(comp), _alloc(alloc){
	}
};

#endif