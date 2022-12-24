#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include "random_access_iterator.hpp"
#include <exception>
#include "integral_type_traits.hpp"

namespace ft
{
	template<typename T, class Alloc = std::allocator<T> >
	class vector {

		private:
			typedef vector<T, Alloc>												vector_type;
		public:	
			typedef T																value_type;
			typedef Alloc															allocator_type;
			typedef typename allocator_type::reference								reference;
			typedef typename allocator_type::const_reference						const_reference;
			typedef typename allocator_type::pointer								pointer;
			typedef typename allocator_type::const_pointer							const_pointer;
			typedef typename allocator_type::size_type								size_type;
			typedef typename allocator_type::difference_type						difference_type;
			typedef typename ft::random_access_iterator<pointer, vector_type>		iterator;
			typedef typename ft::random_access_iterator<const pointer, vector_type>	const_iterator;


		private:
			allocator_type		_alloc;
			pointer				_data;
			size_type			_size;
			size_type			_max_size;
			size_type			_capacity;


		public:
			explicit vector(const allocator_type& alloc = allocator_type());
			explicit vector (size_type n, const value_type& val = value_type(),
				const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector (InputIterator first,
				typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type last,
				const allocator_type& alloc = allocator_type());
			vector (vector const &rsc);
			~vector();

			vector_type&	operator=(vector_type const &rhs);

			size_t	size();
			size_t	max_size();
			size_t	capacity();
			bool	empty();

//			Iterator:
			iterator		begin(void) { return (iterator(_data)); }
			iterator		cbegin(void) { return (const_iterator(_data)); }
			iterator		end(void) { return (iterator(_data + _size)); }
			iterator		cend(void) { return (const_iterator(_data + _size)); }

//			Capacity:
			void			resize(size_type n, value_type val = value_type());
			void			reserve(size_type n);

//			Element Access:
			reference		operator[] (size_type n);
			const_reference	operator[] (size_type n) const;
			reference		at(size_type n);
			const_reference	at(size_type n) const;
			reference		back();
			const_reference	back() const;
			reference		front();
			const_reference	front() const;


//			Modifiers:
			void			assign(size_type n, const value_type& val);
			// template<typename InputIterator>
			// void			assign(InputIterator first, InputIterator last);
			void			push_back(const value_type& val);
			void			pop_back();
			template <class InputIterator>
			void			insert(iterator position, InputIterator first,
				typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type last);
			iterator 		insert (iterator position, const value_type& val);
			void 			insert(iterator position, size_type n, const value_type& val);
			iterator		erase(iterator _position);
			iterator		erase(iterator first, iterator last);

//			Non-member function overloads
			Alloc	get_allocator() const { return (this->_alloc);}

	};

//	Operators:

	template <typename T, class Alloc>
	std::ostream&	operator<<(std::ostream& lhs, vector<T, Alloc> &rhs) {
		for (int i = 0; i < rhs._capacity(); i++) {
			lhs << rhs._data[i] << std::endl;
		}	
		return (lhs);
	}

	template<typename T, class Alloc>
	vector<T, Alloc>&	vector<T, Alloc>::operator=(vector<T, Alloc> const &rhs) {

		for (size_type i = 0; i < _size; i++)
			_alloc.destroy(_data + i);
		_alloc.deallocate(_data, size_type());
		_size = rhs._size;
		_capacity = rhs._capacity;
		_data = _alloc.allocate(_capacity);
		_max_size = rhs._max_size;
		for (size_t i = 0; i < _size; i++)
			_alloc.construct(_data + i, *(rhs._data + i));
		return *this;
	}

//	Constructors:

	template<typename T, class Alloc>
	vector<T, Alloc>::vector(const allocator_type& alloc) : _alloc(alloc) {
		this->_data = _alloc.allocate(0);
		this->_size = 0;
		this->_max_size = _alloc.max_size();
		this->_capacity = 0;
	}


	template<typename T, class Alloc>
	vector<T, Alloc>::vector (size_type n, const value_type& val,
		const allocator_type& alloc) : _alloc(alloc) {
		
		_data = _alloc.allocate(n);
		_size = n;
		_capacity = n;
		this->_max_size = _alloc.max_size();
		for (size_type i = 0; i < n; i ++)
			_alloc.construct(_data + i, val);
	}

	template<typename T, class Alloc>
	template <class InputIterator>
	vector<T, Alloc>::vector (InputIterator first,
		typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type last,
		const allocator_type& alloc) : _alloc(alloc) {
		std::cout << "hello" <<std::endl;

		_data = _alloc.allocate(last - first);
		_size = 0;
		_capacity = last - first;
		_max_size = _alloc.max_size();
		for (; first != last; ++first)
			push_back(*first);
	}

	template<typename T, class Alloc>
	vector<T, Alloc>::vector(const vector& rsc) :	_alloc(rsc.get_allocator()){
		_size = 0;
		_data = _alloc.allocate(0);
		*this = rsc;
	}
	template<typename T, class Alloc>
	vector<T, Alloc>::~vector() {
		std::cout << "vector destructor \n";
		for (size_type i = 0; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
			}
		_alloc.deallocate(this->_data, this->_capacity);
	}

//	Capacity:

	template<typename T, class Alloc>
	size_t	vector<T, Alloc>::size() {
		return (this->_size);
	}

	template<typename T, class Alloc>
	size_t	vector<T, Alloc>::max_size() {
		return (this->_max_size);
	}

	template<typename T, class Alloc>
	size_t	vector<T, Alloc>::capacity() {
		return (this->_capacity);
	}

	template<typename T, class Alloc>
	bool	vector<T, Alloc>::empty() {
		if (this->_size == 0)
			return(true);
		else
			return (false);
	}

	template<typename T, class Alloc>
	void	vector<T, Alloc>::resize(size_type n, value_type val) {
		if (n < this->_size) {
//			std::cout << "case1 \n";
			for (size_type i = n; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
			}
			this->_size = n;
		}
		else if (n > this->_size) {
			T			*temp;
			size_type	c;
			
			if (n <= this->_capacity) {
//				std::cout << "case2 \n";
				for (size_type i = this->_size; i < n; i++) {
						_alloc.construct(_data + i, val);
				}
				this->_size = n;
			}
			else if (n > this->_capacity) {

				if (this->_capacity == 0) {
//					std::cout << "case3 \n";
					if (n > max_size()) {
						 throw std::out_of_range("out_of_range: max_size exeded");
					}
					temp = _alloc.allocate(n);
					c = n;
				}
				else {
//					std::cout << "case4 \n";
					c = this->_capacity * 2;
					if ((c / 2) != this->_capacity)
						throw std::overflow_error("overflow error: max_size exeded");
					temp = _alloc.allocate(c);
				}
				for (size_type i = 0; i < n; i++) {
					
					if (i < this->_size){
//						std::cout << "case5 \n";
						this->_alloc.construct(temp + i, this->_data[i]);
					}
					else {
//						std::cout << "case6 \n";
						_alloc.construct(temp + i, val);
					}
				}
				for (size_type i = 0; i < this->_size; i++) {
					this->_alloc.destroy(this->_data + i);
				}
				_alloc.deallocate(this->_data, this->_capacity);
				this->_data = temp;
				this->_capacity = c;
				this->_size = n;
			}
		}
	}

	template<typename T, class Alloc>
	void	vector<T, Alloc>::reserve(size_type n) {
		if (n > this->_capacity) {
			T	*temp;
			if (n > max_size()) {
				 throw std::out_of_range("out_of_range: max_size exeded");
			}
			temp = _alloc.allocate(n);
			if (temp == NULL) {
				throw std::bad_alloc();
			}
			for (size_type i = 0; i < _size; i++) {
					_alloc.construct((temp + i), *(_data + i));
			}
			for (size_type i = 0; i < this->_size; i++)
				this->_alloc.destroy(this->_data + i);
			_alloc.deallocate(this->_data, this->_capacity);
			this->_data = temp;
			this->_capacity = n;
		}
	}

//	Element Access

	template<typename T, class Alloc>
	typename vector<T, Alloc>::reference	vector<T, Alloc>::operator[] (size_type n) {
		std::cout << "--vector operator[] called-- ";
		return (this->_data[n]);
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::const_reference	vector<T, Alloc>::operator[] (size_type n) const {
		std::cout << "--const vector operator[] called-- ";
		return (this->_data[n]);
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::reference	vector<T, Alloc>::at (size_type n) {
		if (n >= this->_size) {
				 throw std::out_of_range("position out of range");
			}
		return ((this->_data[n]));
	}


	template<typename T, class Alloc>
	typename vector<T, Alloc>::const_reference	vector<T, Alloc>::at (size_type n) const {
		if (n >= this->_size) {
				 throw std::out_of_range("position out of range");
			}
		return ((this->_data[n]));
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::reference	vector<T, Alloc>::back() {
		return (this->_data[this->_size - 1]);
	}
	
	template<typename T, class Alloc>
	typename vector<T, Alloc>::const_reference	vector<T, Alloc>::back() const {
		return (this->_data[this->_size - 1]);
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::reference	vector<T, Alloc>::front(void) {
		return (this->_data[0]);
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::const_reference	vector<T, Alloc>::front() const {
		return (this->_data[0]);
	}

//	Modifiers:

	template<typename T, class Alloc>
	void	vector<T, Alloc>::assign(size_type n, const value_type& val) {

		if (n > _capacity)
			reserve(n);
		for (size_type i = 0; i < _size; i++)
			this->_alloc.destroy(this->_data + i);
		for (size_type i = 0; i < n; i++) 
			_alloc.construct(this->_data + i, val);
		this->_size = n;
	}

/* 	template<typename T, class Alloc>
	template<typename InputIterator>
	void	vector<T, Alloc>::assign(InputIterator first, InputIterator last) {
		
	}
 */

	template<typename T, class Alloc>
	void	vector<T, Alloc>::push_back(const value_type& val) {

		if (this->_capacity > this->_size) {
			this->_alloc.construct(this->_data + this->_size, val);
			this->_size++;
		}
		else {
			resize(this->_size + 1, val);
		}
	}

	template<typename T, class Alloc>
	void	vector<T, Alloc>::pop_back(void) {

		if (this->_size > 0) {
			std::cout << "--pop_back called--" << std::endl;
			this->_alloc.destroy(this->_data + this->_size - 1);
			this->_size--;
		}
	}

	template<typename T, class Alloc>
	template <class InputIterator>
	void	vector<T, Alloc>::insert(iterator position, InputIterator first,
		typename ft::enable_if<!is_integral<InputIterator>::value, InputIterator>::type last) {

		for (; first != last; first++) {
			position = insert(position, *first);
			++position;
		}
	}

	template<typename T, class Alloc>
	typename vector<T, Alloc>::iterator	vector<T, Alloc>::insert(iterator position, const value_type& val) {
		
		if (_size == _capacity) {
			std::cout << "insert 1\n";
			const size_type	n = position - begin();
			reserve((_capacity * 2));
			position = begin() + n;
		}
		if (position == end()) {
			std::cout << "insert 2\n";
			push_back(val);
		}
		else {
			std::cout << "insert 3\n";
			this->_alloc.construct(_data + _size, *(_data + _size - 1));
			++this->_size;
			value_type	copy_val = val;
			std::copy_backward(position, iterator((_data + _size) - 2), iterator((_data + _size) - 1));
			*position = copy_val;
		}
		return (position);
	}

	/*std::unitialized_copy
	Constructs copies of the elements in the range [first,last) into a range
	beginning at result and returns an iterator to the last element in the 
	destination range. Unlike algorithm copy, uninitialized_copy constructs the
	objects in-place, instead of just copying them. This allows to obtain fully
	constructed copies of the elements into a range of uninitialized memory,
	such as a memory block obtained by a call to get_temporary_buffer or malloc.*/
	
	template<typename T, class Alloc>
	void vector<T, Alloc>::insert(iterator position, size_type n, const value_type& val) {

		if (n == 0)
			return ;
		if ((_size + n) > _capacity) {
			std::cout << "insert 1\n";
			difference_type d = position - begin();
			std::cout << d << std::endl;
			reserve(_size + n);
			position = begin() + d;
		}
		if (position == end()) {
			std::cout << "insert 2\n";
			for(size_type i = 0; i < n; i++)
				push_back(val);
		}
		else {
			std::cout << "insert 3\n";
			iterator old_end(end());
			resize(_size + n);
			std::copy_backward(position, old_end, end());
			for(size_type i = 0; i < n; i++) {
				*(position + i) = val;
			}
		}
	}

	/*
	OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);
	Copies the elements in the range [first,last) into the range beginning at result.
	Return an iterator to the end of the destination range where elements have been copied
	*/
	template<typename T, class Alloc>
	typename vector<T, Alloc>::iterator	vector<T, Alloc>::erase(iterator _position) {
		if (_position + 1 != end()) {
			std::copy(((_position + 1)), ((end())), (_position));
		}
		--this->_size;
		this->_alloc.destroy(this->_data + this->_size);
		return (_position);
	}

	/*
	OutputIterator copy (InputIterator first, InputIterator last, OutputIterator result);
	Copies the elements in the range [first,last) into the range beginning at result.
	Return an iterator to the end of the destination range where elements have been copied
	*/
	template<typename T, class Alloc>
	typename vector<T, Alloc>::iterator	vector<T, Alloc>::erase(iterator first, iterator last) {
		iterator i(std::copy(last, end(), first));
		while (i != end()) {
			this->_alloc.destroy(&(*i));
			i++;
		}
		_size -= (last - first);
		return (first);
	}



//	Non-member function overloads

//	template<typename T, class Alloc>
//	Alloc	vector<T, Alloc>::get_allocator() const {
//		return(Alloc);
//	}

};

#endif
