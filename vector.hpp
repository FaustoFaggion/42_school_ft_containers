#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>

namespace ft
{ass Alloc = 
	template<typename T, class Alloc = std::allocator<T>>
	class vector {

		typedef T										value_type;
		typedef Alloc									allocator_type;
		typedef typename allocator_type::pointer		pointer;
		typedef typename allocator_type::const_pointer	const_pointer;
		typedef size_t									size_type;

		private:
			allocator_type		_alloc;
			size_type			_size;
			size_type			_max_size;
			size_type			_capacity;
			pointer				_data;

		public:
			explicit vector(const allocator_type& alloc = allocator_type()) : _alloc(alloc) {
				this->_data = alloc.allocate(0);
				this->_size = 0;
				this->_max_size = 0;
				this->_capacity = 0;
			}

			size_t	size() {
				return (this->_size);
			}

			size_t	max_size() {
				return (this->_max_size);
			}

			size_t	capacity() {
				return (this->_capacity);
			}

			void	resize(size_type n, value_type val = value_type()) {
				T	*temp;

				temp = alloc.allocate(n);
				for (int i = 0; i < n; i++) {
					if (this->_data[i]){
						temp[i] = this->_data[i];
						std::cout << "case1: " << temp[i] << std::endl;
					}
					else {
						temp[i] = val;
						std::cout << "case2: " << temp[i] << std::endl;
					}
				}
				alloc.deallocate(this->_data, this->_data.capacity());
				this->_data = temp;
				this->_size = n;
			}

			void	push_back(const value_type& val) {
				if (this->_capacity >= this->_size) {
					std::cout << "fffffffffff";
				}
				else {
					this->_data[this->_size] = val;
				}
			}
	};

	template <typename T, class Alloc>
	std::ostream&	operator<<(std::ostream& lhs, vector<T, Alloc> &rhs) {
		for (int i = 0; i < rhs._capacity(); i++) {
			lhs << rhs._data[i] << std::endl;
		}	
		return (lhs);
	}

};

/*
template <typename T, class Alloc>
ft::vector<T, Alloc>::vector(const allocator_type& alloc = allocator_type()) {
	this->_data = alloc.allocate(0);
	this->_size = 0;
	this->_max_size = 0;
	this->_capacity = 0;
}

template <typename T, class Alloc>
void	ft::vector<T, Alloc>::resize(size_type n, value_type val = value_type()) {
	T	*temp;

	temp = alloc.allocate(n);
	for (int i = 0; i < n; i++) {
		if (_data[i])
			temp[i] = _data[i];
		else
			temp[i] = val;
	}
	alloc.deallocate(_data, _data.capacity());
	_data = temp;
}
*/



#endif
