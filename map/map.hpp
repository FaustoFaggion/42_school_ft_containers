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
#include "pair.hpp"

namespace ft
{
	template<typename Key, typename T, class Compare = std::less<Key>,
						class Alloc = std::allocator<ft::pair<const Key, T> > >
	class map {

		private:
			typedef	map<Key, T, Compare, Alloc>		map_type;
		public:
			typedef Key								key_type;
			typedef T								mapped_type;
			typedef ft::pair<const Key, T>			value_type;
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
								key_compare, Alloc>				Tree_struct;
			
			Tree_struct	_tree;

		public:
			typedef typename Alloc::pointer							pointer;
			typedef typename Alloc::const_pointer					const_pointer;
			typedef typename Alloc::reference						reference;
			typedef typename Alloc::const_reference					const_reference;
			typedef typename Tree_struct::allocator_type			allocator_type;
			typedef typename Tree_struct::size_type					size_type;
			typedef typename Tree_struct::difference_type			difference_type;
			typedef typename Tree_struct::iterator					iterator;
			typedef typename Tree_struct::const_iterator			const_iterator;
//			typedef typename Tree_struct::reverse_iterator			reverse_iterator;
//			typedef typename Tree_struct::const_reverse_iterator	const_reverse_iterator;

		public:

		/*UTILS*/
		void	print_map() { return (_tree.print_tree(_tree._root, 0));}

		/*CONSTRUCTORS*/
			map() : _tree(Compare(), allocator_type()) { };
			
			explicit map(const key_compare& comp,
				const allocator_type& alloc = allocator_type());
			
			template<typename InputIterator>
			map(InputIterator first, InputIterator last,
				const key_compare& comp = key_compare(),
				const allocator_type& alloc = allocator_type());

			map(const map& rsc);

			~map();
	
		/*ITERATOR*/
		iterator	begin(){ return (_tree.begin());};
		iterator	end(){ return (_tree.end());};


		/*CAPACITY*/
		size_type	size();

		/*MODIFIER*/
		pair<iterator, bool>	insert(const value_type& val) { return (_tree.insert(val));};
	};
	
	/*CONSTRUCTORS*/
	template<typename Key, typename T, class Compare, class Alloc>
	map<Key, T, Compare, Alloc>::map(const key_compare& comp,
				const allocator_type& alloc) : _tree(comp, alloc) { };

	template<typename Key, typename T, class Compare, class Alloc>
	map<Key, T, Compare, Alloc>::~map(void) { };

	/*CAPACITY*/
	template<typename Key, typename T, class Compare, class Alloc>
	typename map<Key, T, Compare, Alloc>::size_type	map<Key, T, Compare, Alloc>::size(void) {return(_tree.size());};

	/*ITERATOR*/
};

#endif