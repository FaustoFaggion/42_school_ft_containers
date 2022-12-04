#include "vector.hpp"
#include "ClassTest.hpp"
#include <vector>

int	main(void) {

	std::cout << "\n------------------VECTOR------------------\n" << std::endl;
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--int--" << std::endl;
	std::vector<int> int_orig;
	ft::vector<int> int_vector;
	
	std::cout << "\n--ClassTest--" << std::endl;
	std::cout << "--orig--" << std::endl;
	std::vector<ClassTest> class_orig;
	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;

	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
//	std::cout << "\n-------------Iterators-------------\n" << std::endl;
	
//	std::cout << "begin: " << int_orig.begin() << std::endl;
//	std::cout << "end: " << int_orig.end() << std::endl;
//	std::cout << "rbegin: " << int_orig.rbegin() << std::endl;
//	std::cout << "rend: " << int_orig.rend() << std::endl;

//	std::cout << "int begin: " << int_vector.begin() << std::endl;
//	std::cout << "int end: " << int_vector.end() << std::endl;
//	std::cout << "int rbegin: " << int_vector.rbegin() << std::endl;
//	std::cout << "int rend: " << int_vector.rend() << std::endl;

	std::cout << "\n-------------capacity--------------\n" << std::endl;
	std::cout << "------resize------\n" << std::endl;
	
	std::cout << "\n--int size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	
	std::cout << "\n--class size(1)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(1);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(1);
	
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n--size(3)--" << std::endl;
	std::cout << "\n--int size(3)--" << std::endl;
	int_orig.resize(3);
	int_vector.resize(3);
	
	std::cout << "\n--class size(3)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(3);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(3);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
/*
	std::cout << "\n--size(4)--" << std::endl;
	std::cout << "\n--int size(4)--" << std::endl;
	int_orig.resize(4);
	int_vector.resize(4);
	
	std::cout << "\n--class size(4)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(4);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(4);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
*/
	std::cout << "\n--size(5)--" << std::endl;
	std::cout << "\n--int size(5)--" << std::endl;
	int_orig.resize(5);
	int_vector.resize(5);
	
	std::cout << "\n--class size(5)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(5);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(5);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
/*
	std::cout << "\n--size(1)--" << std::endl;
	std::cout << "\n--int size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	
	std::cout << "\n--class size(1)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(1);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(1);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--size(0)--" << std::endl;
	std::cout << "\n--int size(0)--" << std::endl;
	int_orig.resize(0);
	int_vector.resize(0);
	
	std::cout << "\n--class size(0)--" << std::endl;
	std::cout << "--orig--" << std::endl;
	class_orig.resize(0);
	std::cout << "--ft--" << std::endl;
	class_vector.resize(0);
	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
*/
/*
	std::cout << "\n--size(4)--" << std::endl;
	int_orig.resize(4);
	int_vector.resize(4);
	class_orig.resize(4);
	class_vector.resize(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	std::cout << "\n--size(5)--" << std::endl;
	int_orig.resize(5);
	int_vector.resize(5);
	class_orig.resize(5);
	class_vector.resize(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	std::cout << "\n--size(1)--" << std::endl;
	int_orig.resize(1);
	int_vector.resize(1);
	class_orig.resize(1);
	class_vector.resize(1);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	std::cout << "\n--size(0)--" << std::endl;
	int_orig.resize(0);
	int_vector.resize(0);
	class_orig.resize(0);
	class_vector.resize(0);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
*/
//	std::cout << "reserve: " << int_vector.reserve() << std::endl;

//	std::cout << "\n------------element access-------------\n" << std::endl;

//	std::cout << "operator[]: " << int_orig[0] << std::endl;
//	std::cout << "at: " << int_orig.at(1) << std::endl;
//	std::cout << "front: " << int_orig.front() << std::endl;
//	std::cout << "back: " << int_orig.back() << std::endl;

//	std::cout << "int operator[]: " << int_vector[0] << std::endl;
//	std::cout << "int at: " << int_vector.at(1) << std::endl;
//	std::cout << "int front: " << int_vector.front() << std::endl;
//	std::cout << "int back: " << int_vector.back() << std::endl;

//	std::cout << "\n---------------modifiers---------------\n" << std::endl;

//	std::cout << "assign: " << int_orig.assign() << std::endl;
//	int_orig.push_back(10);
//	std::cout << "push_back(10) vector[2]: " << int_orig[2] << " capacity: " << int_orig.capacity() << std::endl;
//	int_orig.push_back(11);
//	std::cout << "push_back(11) vector[3]: " << int_orig[3] << " capacity: " << int_orig.capacity() << std::endl;
//	std::cout << "pop_back: " << int_orig.pop_back() << std::endl;
//	std::cout << "insert: " << int_orig.insert() << std::endl;
//	std::cout << "erase: " << int_orig.erase() << std::endl;
//	std::cout << "swap: " << int_orig.swap() << std::endl;
//	std::cout << "clear: " << int_orig.clear() << std::endl;

//	std::cout << "int assign: " << int_vector.assign() << std::endl;
//	int_vector.push_back(10);
//	std::cout << "int push_back(10) vector[2]: " << int_vector[2] << " capacity: " << int_vector.capacity() << std::endl;
//	int_vector.push_back(11);
//	std::cout << "int push_back(11) vector[3]: " << int_vector[3] << " capacity: " << int_vector.capacity() << std::endl;
//	std::cout << "int pop_back: " << int_vector.pop_back() << std::endl;
//	std::cout << "int insert: " << int_vector.insert() << std::endl;
//	std::cout << "int erase: " << int_vector.erase() << std::endl;
//	std::cout << "int swap: " << int_vector.swap() << std::endl;
//	std::cout << "int clear: " << int_vector.clear() << std::endl;

//	std::cout << "\n---------------Allocator---------------\n" << std::endl;
	
//	std::cout << "get_allocator: " << int_orig.get_allocator() << std::endl;
	
//	std::cout << "int get_allocator: " << int_vector.get_allocator() << std::endl;

//	std::cout << "\n-----Non-member function overloads-----\n" << std::endl;

//	std::cout << "swap: " << int_orig.swap() << std::endl;
//	std::cout << "relational operators: " << int_orig.clear() << std::endl;

//	std::cout << "int swap: " << int_vector.swap() << std::endl;
//	std::cout << "int relational operators: " << int_vector.clear() << std::endl;

	return (0);
}