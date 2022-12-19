#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>
#include <iterator>
#include <algorithm>
#include "random_access_iterator.hpp"

namespace ft
{
	template<typename T, class Alloc = std::allocator<T> >
	class vector {
		
		private:
			typedef vector<T, Alloc>										vector_type;
		public:	
			typedef T														value_type;
			typedef Alloc													allocator_type;
			typedef typename allocator_type::reference						reference;
			typedef typename allocator_type::const_reference				const_reference;
			typedef typename allocator_type::pointer						pointer;
			typedef typename allocator_type::const_pointer					const_pointer;
			typedef typename allocator_type::size_type						size_type;
			typedef typename allocator_type::difference_type				difference_type;
			typedef typename ft::random_access_iterator<pointer, vector_type>			iterator;
			typedef typename ft::random_access_iterator<const pointer, vector_type>		const_iterator;


		private:
			allocator_type		_alloc;
			pointer				_data;
			size_type			_size;
			size_type			_max_size;
			size_type			_capacity;


		public:
			explicit vector(const allocator_type& alloc = allocator_type());
			~vector();

			size_t	size();
			size_t	max_size();
			size_t	capacity();
			bool	empty();

//			Iterator:
			iterator	begin(void) { return (iterator(_data)); }
			iterator	cbegin(void) { return (const_iterator(_data)); }
			iterator	end(void) { return (iterator(_data + _size)); }
			iterator	cend(void) { return (const_iterator(_data + _size)); }
			iterator	erase(iterator _position);
			iterator	erase(iterator first, iterator last);

//			Capacity:
			void	resize(size_type n, value_type val = value_type());
			void	reserve(size_type n);

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
			void	assign(size_type n, const value_type& val);
			template<typename InputIterator>
			void	assign(InputIterator first, InputIterator last);
			void	push_back(const value_type& val);
			void	pop_back();

//			Non-member function overloads
//			Alloc	get_allocator() const;
	};

//	Operators:

	template <typename T, class Alloc>
	std::ostream&	operator<<(std::ostream& lhs, vector<T, Alloc> &rhs) {
		for (int i = 0; i < rhs._capacity(); i++) {
			lhs << rhs._data[i] << std::endl;
		}	
		return (lhs);
	}

//	Constructors:

	template<typename T, class Alloc>
	vector<T, Alloc>::vector(const allocator_type& alloc) : _alloc(alloc) {
//		std::cout << "vector constructor \n";
		this->_data = _alloc.allocate(0);
		this->_size = 0;
		this->_max_size = _alloc.max_size();
		this->_capacity = 0;
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

				if (this->_capacity <= 2) {
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
						throw std::overflow_error("overflow error: size_t exeded");
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
			for (size_type i = 0; i < n; i++) {
				if (i < this->_size){
					temp[i] = this->_data[i];
				}
			}
			for (size_type i = 0; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
			}
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

		if (n <= this->_capacity) {
			for (size_type i = 0; i < n; i++) {
				this->_alloc.destroy(this->_data + i);
				_alloc.construct(this->_data + i, val);
			}
			this->_size = n;
		}
		else {
			if (n > max_size()) {
				 throw std::out_of_range("out_of_range: max_size exeded");
			}
			for (size_type i = 0; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
			}
			_alloc.deallocate(this->_data, this->_capacity);
			this->_data = _alloc.allocate(n);
			if (this->_data == NULL) {
				throw std::bad_alloc();
			}
			for (size_type i = 0; i < n; i++) {
				_alloc.construct(this->_data + i, val);
			}
			this->_size = n;
			this->_capacity = n;
		}
	}
/*
	template<typename T, class Alloc>
	template<typename InputIterator>
	void	vector<T, Alloc>::assign(InputIterator first, InputIterator last) {
		
		if (n <= this->_capacity) {
			for (vector::iterator it = first; it != last; it++) {
				this->_alloc.destroy(it);
				_alloc.construct(it, val);
			}
			this->_size = n;
		}
		else {
			if (n > max_size()) {
				 throw std::out_of_range("out_of_range: max_size exeded");
			}
			for (vector::iterator it = first; it != last; it++) {
				this->_alloc.destroy(it);
			}
			_alloc.deallocate(this->_data, this->_capacity);
			this->_data = _alloc.allocate(n);
			if (this->_data == NULL) {
				throw std::bad_alloc();
			}
			for (vector::iterator it = first; it != last; it++) {
				_alloc.construct(it, val);
			}
			this->_size = n;
			this->_capacity = n;
		}
	}
*/

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

//	Non-member function overloads

//	template<typename T, class Alloc>
//	Alloc	vector<T, Alloc>::get_allocator() const {
//		return(Alloc);
//	}

};

#endif
