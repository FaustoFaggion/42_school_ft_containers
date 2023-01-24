#ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <utility>
#include <exception>
#include "RbTree.hpp"

namespace ft
{
	template<typename Key, typename T, class Compare = std::less<Key>,
						class Alloc = std::allocator<std::pair<const Key, T> > >
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
		private:

			typedef RbTree <key_type, value_type, std::_Select1st<value_type>,
								key_compare, Alloc>				container;
			
			container	_tree;

		public:
			typedef typename Alloc::pointer						pointer;
			typedef typename Alloc::const_pointer				const_pointer;
			typedef typename Alloc::reference					reference;
			typedef typename Alloc::const_reference				const_reference;
			typedef typename container::allocator_type			allocator_type;
			typedef typename container::size_type				size_type;
			typedef typename allocator_type::difference_type	difference_type;
//			typedef typename container::iterator				iterator;
//			typedef typename container::const_iterator			const_iterator;
//			typedef typename container::reverse_iterator		reverse_iterator;
//			typedef typename container::const_reverse_iterator	const_reverse_iterator;



		public:
		/*CONSTRUCTORS*/
			map() : _tree(Compare(), allocator_type()) { };
			
			explicit map(const key_compare& comp,
				const allocator_type& alloc = allocator_type());
			
			template<typename InputIterator>
			map(InputIterator first, InputIterator last,
				const key_compare& comp = key_compare(),
				const allocator_type& alloc = allocator_type());

			map(const map& rsc);
	
		/*CAPACITY*/
		size_type	size(void) {return(_tree.size());};
	};

	template<typename Key, typename T, class Compare, class Alloc>
	map<Key, T, Compare, Alloc>::map(const key_compare& comp,
				const allocator_type& alloc) : _tree(comp, alloc) { };
};

#endif