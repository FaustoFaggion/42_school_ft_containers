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
			
		// public:
		
			typedef Key								key_type;
			typedef T								mapped_type;
			typedef ft::pair<const Key, T>			value_type;
			typedef Compare							key_compare;

			typedef RbTree <key_type, value_type,
					std::_Select1st<value_type>,
					key_compare, Alloc>				Tree_struct;

			class value_compare : public std::binary_function<value_type,
															value_type, bool>
			{
				friend class map<Key, T, Compare, Alloc>;

				protected:
					Compare	comp;

				public:
					value_compare(Compare c) : comp(c) {};
					
					bool operator()(const value_type& lhs,
												const value_type& rhs) const
					{
						return (comp(lhs.first, rhs.first));
					}
			};

		private:

			Tree_struct		_tree;

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
			typedef typename Tree_struct::reverse_iterator			reverse_iterator;
			typedef typename Tree_struct::const_reverse_iterator	const_reverse_iterator;

		public:

		/*UTILS*/
		
		// void	print_map() { return (_tree.print_tree(_tree._root, 0));}

		/*CONSTRUCTORS*/
			map() : _tree(Compare(), allocator_type()) 
			{
				// std::cout << "Map default constructor called" << std::endl;
			};
			
			explicit map(const key_compare& comp,
				const allocator_type& alloc = allocator_type()) :
														_tree(comp, alloc)
			{
				// std::cout << "Map paramter constructor called" << std::endl;
			};
			
			template<typename InputIterator>
			map(InputIterator first, InputIterator last,
				const key_compare& comp = key_compare(),
					const allocator_type& alloc = allocator_type()) :
															_tree(comp, alloc)
			{
				// std::cout << "Map range constructor called" << std::endl;
				insert(first, last);
			}

			map(const map& rsc)
			{
				// std::cout << "Map copy constructor called" << std::endl;
				*this = rsc;
			}

			~map(void) { };

		/*OPERATOR*/

			map	&operator=(map const &rsc)
			{
				// std::cout << "Map operator = called" << std::endl;
				_tree = rsc._tree;
				return (*this);
			}

		/*ITERATOR*/

			iterator				begin()
			{
				return (_tree.begin());
			}

			const_iterator			begin() const
			{
				return (_tree.begin());
			}
			
			iterator				end()
			{
				return (_tree.end());
			}
			
			const_iterator			end() const
			{
				return (_tree.end());
			}

			reverse_iterator		rbegin()
			{
				return (_tree.rbegin());
			}

			const_reverse_iterator	rbegin()
			{
				return (_tree.rbegin());
			}

			reverse_iterator		rend()
			{
				return (_tree.rend());
			}

			const_reverse_iterator	rend()
			{
				return (_tree.rend());
			}

		/*CAPACITY*/
			size_type				size()
			{
				return(_tree.size());
			}
			
			bool 					empty() const
			{
				return(_tree.empty());
			}

			size_type 				max_size() const
			{
				return(_tree.max_size());
			}

		/*ACCESS ELEMENT*/
			mapped_type&			operator[](const key_type& k)
			{
				ft::pair<iterator, bool>	it;

				it = this->insert(ft::make_pair(k, mapped_type()));
				return (it.first->second);
			}

		/*MODIFIER*/
			pair<iterator, bool>	insert(const value_type& val)
			{
				return (_tree.insert(val));
			}

			iterator 				insert (iterator position, const value_type& val)
			{
				return (_tree.insert(position, val));
			}

			template <class InputIterator>
			void 					insert(InputIterator first, InputIterator last)
			{
				return (_tree.insert(first, last));
			}

			size_type 				erase (const key_type& k)
			{
				return (_tree.erase(k));
			}

			void 					erase (iterator position)
			{
				return (_tree.erase(position));
			}

			void 					erase (iterator first, iterator last)
			{
				return (_tree.erase(first, last));
			}

			void 					swap (map& x)
			{
				_tree.clear();
				_tree.swap(x.begin(), x.end());
			}

			void					clear()
			{
				return (_tree.clear());
			}

		/*OBSERVERS*/

			key_compare				key_comp() const
			{
				return (key_compare());
			}

			value_compare			value_comp() const
			{
				return (value_compare(key_compare()));
			}

		/*OPERATIONS*/

			iterator				find (const key_type& k)
			{
				return (_tree.find(k));
			}

			const_iterator			find (const key_type& k) const
			{
				return (_tree.find());
			}
	
			size_type				count (const key_type& k) const
			{
				return (_tree.count(k));
			}
	
			iterator				lower_bound (const key_type& k)
			{
				return (_tree.lower_bound(k));
			}

			iterator				upper_bound (const key_type& k)
			{
				return (_tree.upper_bound(k));
			}

			pair<iterator,iterator>	equal_range (const key_type& k)
			{
				return (_tree.equal_range(k));
			}

			pair<const_iterator,const_iterator>	equal_range (const key_type& k) const
			{
				return (_tree.equal_range(k));
			}
			
	};
};

#endif