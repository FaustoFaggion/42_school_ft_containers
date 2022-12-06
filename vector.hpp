#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>

namespace ft
{
	template<typename T, class Alloc = std::allocator<T> >
	class vector {

		typedef T											value_type;
		typedef Alloc										allocator_type;
		typedef typename allocator_type::reference			reference;
		typedef typename allocator_type::const_reference	const_reference;
		typedef typename allocator_type::pointer			pointer;
		typedef typename allocator_type::const_pointer		const_pointer;
		typedef size_t										size_type;

		private:
			std::allocator<T>	_alloc;
			size_type			_size;
			size_type			_max_size;
			size_type			_capacity;
			pointer				_data;


		public:
			explicit vector(const allocator_type& alloc = allocator_type());
			~vector();

			size_t	size();
			size_t	max_size();
			size_t	capacity();
			bool	empty();

//			Capacity:
			void	resize(size_type n, value_type val = value_type());
			void	reserve(size_type n);

//			Element Access:
			T	&operator[] (size_type n);

//			Modifiers:
			void	push_back(const value_type& val);
	};

	template <typename T, class Alloc>
	std::ostream&	operator<<(std::ostream& lhs, vector<T, Alloc> &rhs) {
		for (int i = 0; i < rhs._capacity(); i++) {
			lhs << rhs._data[i] << std::endl;
		}	
		return (lhs);
	}

	template<typename T, class Alloc>
	vector<T, Alloc>::vector(const allocator_type& alloc) : _alloc(alloc) {
		std::cout << "vector constructor \n";
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
			std::cout << "case1 \n";
			for (size_type i = n; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
			}
			this->_size = n;
		}
		else if (n > this->_size) {
			T			*temp;
			size_type	c;
			
			if (n <= this->_capacity) {
				std::cout << "case2 \n";
				for (size_type i = this->_size; i < n; i++) {
						_alloc.construct(_data + i, val);
				}
				this->_size = n;
			}
			else if (n > this->_capacity) {

				if (this->_capacity <= 1) {
					std::cout << "case3 \n";
					temp = _alloc.allocate(n);
					c = n;
				}
				else {
					std::cout << "case4 \n";
				//	c = this->_capacity;
				//	while (c < n)
				//		c *= 2;
					c = n * 2;
					temp = _alloc.allocate(c);
				}
				for (size_type i = 0; i < n; i++) {
					
					if (i < this->_size){
						std::cout << "case5 \n";
						this->_alloc.construct(temp + i, this->_data[i]);
					}
					else {
						std::cout << "case6 \n";
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
				 throw std::length_error("length_error");
			}
			temp = _alloc.allocate(n);
			if (temp == NULL) {
				throw std::bad_alloc();
			}
			for (size_type i = 0; i < n; i++) {
				if (i < this->_size){
					std::cout << "case5 \n";
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
	T	&vector<T, Alloc>::operator[] (size_type n) {

		std::cout << "--vector operator[] called--" << std::endl;

		return (this->_data[n]);
	}


//	Modifiers:


// Verificar erro em operator[] ou push_back???????



	template<typename T, class Alloc>
	void	vector<T, Alloc>::push_back(const value_type& val) {
		
		std::cout << "--vector push_back called--" << std::endl;
		
		if (this->_capacity > this->_size) {
			std::cout << "--capacity > size--" << std::endl;
			this->_alloc.construct(this->_data + this->_size, val);
			this->_size++;
		}
		else {
			std::cout << "--capacity < size--" << std::endl;
			resize(this->_size + 1, val);
		}
	}

};
#endif
