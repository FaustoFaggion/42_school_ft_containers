#include "vector.hpp"
#include <vector>

int	main(void) {

	int a = int(2);
	std::cout << a << std::endl;
	
	std::cout << "\n------------VECTOR------------\n" << std::endl;
	
	std::cout << "\n--------Standart Constructor--------\n" << std::endl;

	std::vector<int> orig;
	std::vector<int> ft_vector;

	std::cout << "\n----Iterators----\n" << std::endl;
	
//	std::cout << "begin: " << orig.begin() << std::endl;
//	std::cout << "end: " << orig.end() << std::endl;
//	std::cout << "rbegin: " << orig.rbegin() << std::endl;
//	std::cout << "rend: " << orig.rend() << std::endl;

//	std::cout << "ft begin: " << ft_vector.begin() << std::endl;
//	std::cout << "ft end: " << ft_vector.end() << std::endl;
//	std::cout << "ft rbegin: " << ft_vector.rbegin() << std::endl;
//	std::cout << "ft rend: " << ft_vector.rend() << std::endl;

	std::cout << "\n----capacity----\n" << std::endl;
	
	std::cout << "size: " << orig.size() << std::endl;
	std::cout << "max_size: " << orig.max_size() << std::endl;
	std::cout << "capacity: " << orig.capacity() << std::endl;
	std::cout << "empty: " << orig.empty() << std::endl;
	orig.resize(2);
	std::cout << "resize(2):" << std::endl;
	std::cout << "	capacity: " << orig.capacity() << " size: " << orig.size() << " empty: " << orig.empty() << std::endl;
//	std::cout << "reserve: " << orig.reserve() << std::endl;

	std::cout << "ft size: " << ft_vector.size() << std::endl;
	std::cout << "ft max_size: " << ft_vector.max_size() << std::endl;
	std::cout << "ft capacity: " << ft_vector.capacity() << std::endl;
	std::cout << "ft empty: " << ft_vector.empty() << std::endl;
	ft_vector.resize(2);
	std::cout << "ft resize(2):" << std::endl;
	std::cout << "	capacity: " << ft_vector.capacity() << " size: " << ft_vector.size() << " empty: " << ft_vector.empty() << std::endl;
//	std::cout << "reserve: " << ft_vector.reserve() << std::endl;

	std::cout << "\n----element access----\n" << std::endl;

//	std::cout << "operator[]: " << orig[0] << std::endl;
//	std::cout << "at: " << orig.at(1) << std::endl;
//	std::cout << "front: " << orig.front() << std::endl;
//	std::cout << "back: " << orig.back() << std::endl;

//	std::cout << "ft operator[]: " << ft_vector[0] << std::endl;
//	std::cout << "ft at: " << ft_vector.at(1) << std::endl;
//	std::cout << "ft front: " << ft_vector.front() << std::endl;
//	std::cout << "ft back: " << ft_vector.back() << std::endl;

	std::cout << "\n----modifiers----\n" << std::endl;

//	std::cout << "assign: " << orig.assign() << std::endl;
	orig.push_back(10);
	std::cout << "push_back(10): " << orig[0] << std::endl;
//	std::cout << "pop_back: " << orig.pop_back() << std::endl;
//	std::cout << "insert: " << orig.insert() << std::endl;
//	std::cout << "erase: " << orig.erase() << std::endl;
//	std::cout << "swap: " << orig.swap() << std::endl;
//	std::cout << "clear: " << orig.clear() << std::endl;

//	std::cout << "ft assign: " << ft_vector.assign() << std::endl;
//ft_vector.push_back(10);
//	std::cout << "ft push_back(10): " << ft_vector[0] << std::endl;
//	std::cout << "ft pop_back: " << ft_vector.pop_back() << std::endl;
//	std::cout << "ft insert: " << ft_vector.insert() << std::endl;
//	std::cout << "ft erase: " << ft_vector.erase() << std::endl;
//	std::cout << "ft swap: " << ft_vector.swap() << std::endl;
//	std::cout << "ft clear: " << ft_vector.clear() << std::endl;

	std::cout << "\n----Allocator----\n" << std::endl;
	
//	std::cout << "get_allocator: " << orig.get_allocator() << std::endl;
	
//	std::cout << "ft get_allocator: " << ft_vector.get_allocator() << std::endl;

	std::cout << "\n----Non-member function overloads----\n" << std::endl;

//	std::cout << "swap: " << orig.swap() << std::endl;
//	std::cout << "relational operators: " << orig.clear() << std::endl;

//	std::cout << "ft swap: " << ft_vector.swap() << std::endl;
//	std::cout << "ft relational operators: " << ft_vector.clear() << std::endl;

	return (0);
}