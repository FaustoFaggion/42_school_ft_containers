#ifndef RANDOM_ACCESS_ITERATOR_HPP
#define RANDOM_ACCESS_ITERATOR_HPP

#include "iterator.hpp"

namespace ft {

	template<typename iT>
	class random_access_iterator : public iterator<std::random_access_iterator_tag, iT> {

		public:
			
			typedef iT												iterator_type;
			typedef typename iterator_traits<iT>::value_type		value_type;
			typedef typename iterator_traits<iT>::difference_type	difference_type;
			typedef typename iterator_traits<iT>::pointer			pointer;
			typedef typename iterator_traits<iT>::reference			reference;
			typedef typename iterator_traits<iT>::iterator_category	iterator_category;

		private:
			iterator_type	_current;

		public:

//		Constructors:

			random_access_iterator(void) : _current(NULL) { };
			explicit random_access_iterator(const iterator_type &rsc) : _current(rsc) { };
			random_access_iterator(random_access_iterator const &rsc) {
				*this = rsc;
			}
			~random_access_iterator() { }; 

			random_access_iterator	&operator=(random_access_iterator const &rsc) {
				this->_current = rsc.getCurrent();
				return (*this);
			}

			iterator_type	getCurrent(void) const { return (this->_current);};


			bool	operator==(random_access_iterator &rsc) const{ 
				return (this->_current == rsc.getCurrent());
			};

			bool	operator!=(random_access_iterator &rsc) const{ 
				return (this->_current != rsc.getCurrent());
			};
			
//		Foward iterator requirements:

			reference	operator*(void) { return (*_current);};
			pointer		operator->(void) { return &(*_current);};
			random_access_iterator	&operator++(void) {
				++_current; return (*this);
			};
			random_access_iterator	operator++(int) {
				return random_access_iterator(_current++);
			};

//		Bidirectional iterator requirements:

			random_access_iterator	&operator--(void) {
				--_current; return (*this);
			};
			random_access_iterator	operator--(int) { 
				return random_access_iterator(_current--);
			};
	
//		Random access iterator requirements:

			reference	operator[](const difference_type & _n) const {
				return (_current[_n]);
			};
			random_access_iterator	&operator+=(const difference_type &_n) {
				_current += _n;
				return (*this);
			}
			random_access_iterator	&operator-=(const difference_type &_n) {
				_current -= _n;
				return (*this);
			}
			random_access_iterator	operator+(const difference_type &_n) {
				return (random_access_iterator(_current + _n));
			}
			random_access_iterator	operator-(const difference_type &_n) {
				return (random_access_iterator(_current - _n));
			}
	};

//		Foward iterator requirements:

		template<typename _IteratorL, typename _IteratorR>
		inline bool	operator==(const random_access_iterator<_IteratorL> &_x,
			const random_access_iterator<_IteratorR> &_y) {
			return (_x.getCurrent() == _y.getCurrent());
		}

		template<typename _IteratorL, typename _IteratorR>
		inline bool	operator!=(const random_access_iterator<_IteratorL> &_x,
			const random_access_iterator<_IteratorR> &_y) {
			return (_x.getCurrent() != _y.getCurrent());
		}
};
#endif