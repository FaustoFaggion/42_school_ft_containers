#ifndef RBTREE_ITERATOR_HPP
#define RBTREE_ITERATOR_HPP

#include <cstddef> /*ptrdiff_t*/
#include "iterator_traits.hpp"
#include <iterator>
#include <algorithm>
#include "node_base.hpp"

namespace ft {

	template<typename iT, typename Tr>
	class RbTree_iterator : public iterator<std::bidirectional_iterator_tag, iT> {

		private:

			typedef RbTree_iterator<iT, Tr>								self;
			typedef Tr													rb_tree;
			typedef iT													iterator_type;
			typedef typename iterator_traits<iT>::value_type			value_type;
			typedef typename iterator_traits<iT>::difference_type		difference_type;
			typedef typename iterator_traits<iT>::pointer				pointer;
			typedef typename iterator_traits<iT>::reference				reference;
			typedef typename iterator_traits<iT>::iterator_category		iterator_category;

			typedef node_tree<value_type>								node;
			typedef node*												node_ptr;
			typedef const node*											const_node_ptr;

		private:
			node_ptr	_current;

		public:

			node_ptr const	&getCurrent() const
			{
				return (_current);
			}

			RbTree_iterator(void) : _current(NULL) { };
			
			explicit RbTree_iterator(node_ptr rsc) : _current(rsc) { };

			RbTree_iterator(const self &rsc) {*this = rsc;};

		/*OPERATORS*/



			reference	operator*(void) { return (_current->_node_value);};
			pointer		operator->(void) { return &(_current->_node_value);};// &(*_current)

			bool		operator==(self const& rhs) const { return _current == rhs.getCurrent(); };
  			bool		operator!=(self const& rhs) const { return _current != rhs.getCurrent(); };
			bool		operator<(self const& rhs) const { return _current < rhs.getCurrent(); };
			bool		operator>(self const& rhs) const { return _current > rhs.getCurrent(); };
			bool		operator<=(self const& rhs) const { return _current <= rhs.getCurrent(); };
			bool		operator>=(self const& rhs) const { return _current >= rhs.getCurrent(); };
			
			self		operator++(void)
			{
				_current = rb_tree::tree_sucessor(_current);
				return (*this);
			};

			self		operator++(int)
			{
				self	tmp = *this;

				_current = rb_tree::tree_sucessor(_current);
				return (tmp);
			}

	};
};


#endif