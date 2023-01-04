#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <utility>
#include <exception>
#include "rbTree.hpp"

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
					value_compare(Compare c) : comp(c) {};

				public:
					bool operator()(const value_type& lhs, const value_type& rhs) const {
						return (comp(lhs.first, rhs.first));
					}
			};

			typedef Alloc															allocator_type;
			typedef typename allocator_type::reference								reference;
			typedef typename allocator_type::const_reference						const_reference;
			typedef typename allocator_type::pointer								pointer;
			typedef typename allocator_type::const_pointer							const_pointer;
			typedef typename allocator_type::size_type								size_type;
			typedef typename allocator_type::difference_type						difference_type;
			typedef rbTree <typename Key, typename T, class Compare,class Alloc >	container;
			typedef typename container::iterator									iterator;
			typedef typename container::const_iterator								const_iterator;
			
		private:

			container	tree;

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