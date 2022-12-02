#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <memory>
#include <cstring>

namespace ft
{
	template<typename T, class Alloc = std::allocator<T>>
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

			size_t	size();
			size_t	max_size();
			size_t	capacity();
			bool	empty();

			void	resize(size_type n, value_type val = value_type());
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
		this->_size = 0;
		this->_data = _alloc.allocate(this->_size);
		this->_max_size = _alloc.max_size();
		this->_capacity = 0;
	}

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
			for (size_type i = n; i < this->_size; i++) {
				this->_alloc.destroy(this->_data + i);
				this->_size = n;
			}
		}
		else if (n > this->_size) {
			T	*temp;
			
			if (n <= this->_capacity) {
				for (size_type i = this->_size; i < n; i++) {
						_alloc.construct(_data + i, val);
				}
				this->_size = n;
			}
			else if (n > this->_capacity) {
				if (n <= 2) {
					temp = _alloc.allocate(n);
					this->_capacity = n;
				}
				else {
					while (this->_capacity < n)
						this->_capacity *= 2;
					temp = _alloc.allocate(this->_capacity);
				}
				for (size_type i = 0; i < n; i++) {
					if (i < this->_size){
						this->_alloc.construct(temp + i, this->_data[i]);
						this->_alloc.destroy(this->_data + i);
					}
					else {
						_alloc.construct(temp + i, val);
					}
				}
				_alloc.deallocate(this->_data, this->_capacity);
				this->_data = temp;
				this->_size = n;
			}
		}
	}

	template<typename T, class Alloc>
	void	vector<T, Alloc>::push_back(const value_type& val) {
		
		
		if (this->_capacity >= this->_size) {
			std::cout << "fffffffffff";
		}
		else {
			
		}
	}
};
#endif
