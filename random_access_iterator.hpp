#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

#include "iterator.hpp"

namespace ft {

	template<typename iT, typename _container>
	class random_access_iterator : public iterator<std::random_access_iterator_tag, iT> {

		private:
			typedef random_access_iterator							self;
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

			random_access_iterator(void) : _current(NULL) { };
			explicit random_access_iterator(const iterator_type &rsc) : _current(rsc) { };
			random_access_iterator(self const &rsc) {*this = rsc;}
			~random_access_iterator() { }; 

			self	&operator=(self const &rsc) {
				this->_current = rsc.getCurrent();
				return (*this);
			}

			iterator_type	getCurrent(void) const { return (this->_current);};
			
//		Foward iterator requirements:

			reference	operator*(void) { return (*_current);};
			pointer		operator->(void) { return (_current);};// &(*_current)
			self		&operator++(void) { ++_current; return (*this);};
			self		operator++(int) { return self(_current++);};

//		Bidirectional iterator requirements:

			self		&operator--(void) { --_current; return (*this);};
			self		operator--(int) { return self(_current--);};
	
//		Random access iterator requirements:

			reference	operator[](const difference_type & _n) const {
				return (_current[_n]);
			};
			self		&operator+=(const difference_type &_n) {
				_current += _n;
				return (*this);
			}
			self		operator+(const difference_type &_n) {
				return (self(_current + _n));
			}
			friend self	operator+(const self &rhs, const difference_type &_n) {
				return (self(rhs.getCurrent() + _n));
			}
			self		&operator-=(const difference_type &_n) {
				_current -= _n;
				return (*this);
			}
			self		operator-(const difference_type &_n) {
				return (self(_current - _n));
			}
	};

//		Foward iterator requirements:

		template<typename _IteratorL, typename _IteratorR, typename _container>
		inline bool	operator==(const random_access_iterator<_IteratorL, _container> &lhs,
			const random_access_iterator<_IteratorR, _container> &rhs) {
			return (lhs.getCurrent() == rhs.getCurrent());
		}

		template<typename _Iterator, typename _container>
		inline bool	operator==(const random_access_iterator<_Iterator, _container> &lhs,
			const random_access_iterator<_Iterator, _container> &rhs) { 
			return (lhs.getCurrent() == rhs.getCurrent());
		};


		template<typename _IteratorL, typename _IteratorR, typename _container>
		inline bool	operator!=(const random_access_iterator<_IteratorL, _container> &lhs,
			const random_access_iterator<_IteratorR, _container> &rhs) {
			return (lhs.getCurrent() != rhs.getCurrent());
		}
		
		template<typename _Iterator, typename _container>
		inline bool	operator!=(const random_access_iterator<_Iterator, _container> &lhs,
			const random_access_iterator<_Iterator, _container> &rhs) {
			return (lhs.getCurrent() != rhs.getCurrent());;
		};
		
		template<typename _IteratorL, typename _IteratorR, typename _container>
		inline typename random_access_iterator<_IteratorL, _container>::difference_type
			operator-(const random_access_iterator<_IteratorL, _container> &lhs,
				const random_access_iterator<_IteratorR, _container> &rhs) {
				return (lhs.getCurrent() - rhs.getCurrent());
			}

		template<typename _IteratorL, typename _IteratorR, typename _container>
		inline typename random_access_iterator<_IteratorL, _container>::difference_type
			operator+(const random_access_iterator<_IteratorL, _container> &lhs,
				const random_access_iterator<_IteratorR, _container> &rhs) {
				return (lhs.getCurrent() + rhs.getCurrent());
			}
};
#endif