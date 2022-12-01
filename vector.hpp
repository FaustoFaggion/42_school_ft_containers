#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>

namespace ft
{
	template<typename T, class Alloc = std::allocator<T>>
	class vector {

		typedef	Allocallocator_type;
		
		private:
			size_t	_size;
			size_t	_max_size;
			size_t	_capacity;
			T				*_data;


		public:
		explicit vector (const Alloc& alloc = allocator_type()) {
			this->_data = alloc.allocate(0);
			this->_size = 0;
			this->_max_size = 0;
			this->_capacity = 0;
		}
	};
};


#endif
