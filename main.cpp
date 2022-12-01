#include "vector.hpp"
#include <vector>
#include <iostream>
#include <string.h>


int	main(void) {

	std::cout << "------------VECTOR------------\n" << std::endl;
	
	std::cout << "--------Standart Constructor--------\n" << std::endl;

	std::vector<int> orig;
	std::cout << "----Iterators----\n" << std::endl;
	
	std::cout << "begin: " << orig.begin() << std::endl;
	std::cout << "end: " << orig.end() << std::endl;
	std::cout << "rbegin: " << orig.rbegin() << std::endl;
	std::cout << "rend: " << orig.rend() << std::endl;
	std::cout << "cbegin: " << orig.cbegin() << std::endl;
	std::cout << "cend: " << orig.cend() << std::endl;
	std::cout << "crbegin: " << orig.crbegin() << std::endl;
	std::cout << "crend: " << orig.crend() << std::endl;

	std::cout << "----capacity----\n" << std::endl;
	
	std::cout << "size: " << orig.size() << std::endl;
	std::cout << "max_size: " << orig.max_size() << std::endl;
	std::cout << "resize: " << orig.resize() << std::endl;
	std::cout << "capacity: " << orig.capacity() << std::endl;
	std::cout << "empty: " << orig.empty() << std::endl;
	std::cout << "reserve: " << orig.reserve() << std::endl;
	std::cout << "shirink_to_fit: " << orig.shrink_to_fit() << std::endl;

	std::cout << "----element access----\n" << std::endl;

	std::cout << "operator[]: " << orig[0] << std::endl;
	std::cout << "at: " << orig.at(1) << std::endl;
	std::cout << "front: " << orig.front() << std::endl;
	std::cout << "back: " << orig.back() << std::endl;
	std::cout << "data: " << orig.data() << std::endl;

	std::cout << "----modifiers----\n" << std::endl;

	std::cout << "assign: " << orig.assign() << std::endl;
	std::cout << "push_back: " << orig.push_back() << std::endl;
	std::cout << "pop_back: " << orig.pop_back() << std::endl;
	std::cout << "insert: " << orig.insert() << std::endl;
	std::cout << "erase: " << orig.erase() << std::endl;
	std::cout << "swap: " << orig.swap() << std::endl;
	std::cout << "clear: " << orig.clear() << std::endl;
	std::cout << "emplace: " << orig.emplace() << std::endl;
	std::cout << "emplace_back: " << orig.emplace_back() << std::endl;
	
	std::cout << "----Allocator----\n" << std::endl;
	
	std::cout << "get_allocator: " << orig.get_allocator() << std::endl;
	
	std::cout << "swap: " << orig.swap() << std::endl;
	std::cout << "relational operators: " << orig.clear() << std::endl;
	
	
	
	ft::vector<int> test1;
	std::allocator<int> all;
	std::cout << "reference\n" << std::endl;
	std::cout << &test << std::endl;
	std::cout << &test1 << std::endl;
	std::cout << "position [0]" << std::endl;
	std::cout << &test[0] << std::endl;
//	std::cout << &test1[0] << std::endl;

	return (0);
}