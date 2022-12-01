#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>

namespace ft
{
	template<typename T, class Alloc = std::allocator<T>>
	class vector {

		typedef	Alloc		allocator_type;
		typedef size_t	size_type;
		typedef	T				value_type;
		
		private:
			std::allocator<T>	alloc;
			size_t						_size;
			size_t						_max_size;
			size_t						_capacity;
			T									*_data;


		public:
			vector(const allocator_type& alloc = allocator_type()) {
				this->_data = alloc.allocate(0);
				this->_size = 0;
				this->_max_size = 0;
				this->_capacity = 0;
			}
			void	resize(size_type n, value_type val = value_type()) {
				T	*temp;

				temp = alloc.allocate(n);
				for (int i = 0; i < n; i++) {
					if (this->_data[i])
						temp[i] = this->_data[i];
					else
						temp[i] = val;
				}
				alloc.deallocate(this->_data, this->_data.capacity());
				this->_data = temp;
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
