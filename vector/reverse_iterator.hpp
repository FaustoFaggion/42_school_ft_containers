#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "random_access_iterator.hpp"

namespace ft {

	template<typename iT>
	class reverse_iterator : public iterator<std::random_access_iterator_tag, iT> {
	
		private:
			typedef reverse_iterator								self;
		public:
			
			typedef iT												iterator_type;
			typedef typename iterator_traits<iT>::value_type		value_type;
			typedef typename iterator_traits<iT>::difference_type	difference_type;
			typedef typename iterator_traits<iT>::pointer			pointer;
			typedef typename iterator_traits<iT>::reference			reference;
			typedef typename iterator_traits<iT>::iterator_category	iterator_category;

		protected:
			iterator_type	_current;

		public:

//		Constructors:

			reverse_iterator(void) : _current(NULL) { };
			explicit reverse_iterator(const iterator_type &rsc) : _current(rsc) { };
			reverse_iterator(self const &rsc) {*this = rsc;}
			~reverse_iterator() { }; 

			self	&operator=(self const &rsc) {
				this->_current = rsc.getCurrent();
				return (*this);
			}

			iterator_type	getCurrent(void) const { return (this->_current);};

//		Operators:

			reference	operator*(void) { 
				iterator_type tmp = _current;
				return (*(--tmp));
			};
			pointer		operator->(void) { 
				iterator_type tmp = _current;
				return (--tmp);
			};	
			self		&operator++(void) { --_current; return (*this);};
			self		operator++(int) { return self(_current--);};
			self		&operator--(void) { ++_current; return (*this);};
			self		operator--(int) { return self(_current++);};
	
			bool	operator!=(self const &rhs) const  { return _current != rhs._current; }
			bool	operator==(self const &rhs) const  { return _current == rhs._current; }
			bool	operator<=(self const &rhs) const  { return _current <= rhs._current; }
			bool	operator>=(self const &rhs) const  { return _current >= rhs._current; }
			bool	operator>(self const &rhs) const   { return _current > rhs._current; }
			bool	operator<(self const &rhs) const   { return _current < rhs._current; }
	
	
			reference	operator[](const difference_type & _n) const {
				return (_current[_n]);
			};

			self		&operator+=(const difference_type &_n) {
				_current -= _n;
				return (*this);
			}

			self		&operator-=(const difference_type &_n) {
				_current += _n;
				return (*this);
			}

			self		operator+(const difference_type &_n) {
				return (self(_current - _n));
			}

			friend self	operator+(const difference_type &_n, const self &rhs) {
				return (self(rhs.getCurrent() - _n));
			}

			self		operator-(const difference_type &_n) {
				return (self(_current + _n));
			}
	
	};

		template<typename _IteratorL, typename _IteratorR>
	inline bool	operator==(const reverse_iterator<_IteratorL> &lhs,
		const reverse_iterator<_IteratorR> &rhs) {
		return (lhs.getCurrent() == rhs.getCurrent());
	}

//	template<typename _Iterator>
//	inline bool	operator==(const reverse_iterator<_Iterator> &lhs,
//		const reverse_iterator<_Iterator> &rhs) { 
//		return (lhs.getCurrent() == rhs.getCurrent());
//	};

	template<typename _IteratorL, typename _IteratorR>
	inline bool	operator!=(const reverse_iterator<_IteratorL> &lhs,
		const reverse_iterator<_IteratorR> &rhs) {
		return (lhs.getCurrent() != rhs.getCurrent());
	}
	
//	template<typename _Iterator>
//	inline bool	operator!=(const reverse_iterator<_Iterator> &lhs,
//		const reverse_iterator<_Iterator> &rhs) {
//		return (lhs.getCurrent() != rhs.getCurrent());;
//	};

	template<typename IteratorL, typename IteratorR>
	bool operator<=(reverse_iterator<IteratorL> const& rhs,
		reverse_iterator<IteratorR> const& lhs) {
			return (rhs.getCurrent() <= lhs.getCurrent());
	};

	template<typename IteratorL, typename IteratorR>
	bool operator>=(reverse_iterator<IteratorL> const& rhs,
		reverse_iterator<IteratorR> const& lhs) {
			return (rhs.getCurrent >= lhs.getCurrent());
	}

	template<typename IteratorL, typename IteratorR>
	bool operator<(reverse_iterator<IteratorL> const& rhs,
		reverse_iterator<IteratorR> const& lhs) {
			return (rhs.getCurrent() < lhs.getCurrent());
	};

	template<typename IteratorL, typename IteratorR>
	bool operator>(reverse_iterator<IteratorL> const& rhs,
		reverse_iterator<IteratorR> const& lhs) {
			return (rhs.getCurrent > lhs.getCurrent());
	}
	
	template<typename _IteratorL, typename _IteratorR>
	inline typename reverse_iterator<_IteratorL>::difference_type
		operator-(const reverse_iterator<_IteratorL> &lhs,
			const reverse_iterator<_IteratorR> &rhs) {
			return (lhs.getCurrent() - rhs.getCurrent());
		}

	template<typename _IteratorL, typename _IteratorR>
	inline typename reverse_iterator<_IteratorL>::difference_type
		operator+(const reverse_iterator<_IteratorL> &lhs,
			const reverse_iterator<_IteratorR> &rhs) {
			return (lhs.getCurrent() + rhs.getCurrent());
			}
};

#endif