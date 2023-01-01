#include "../../ClassTest.hpp"
#include "../../vector.hpp"
#include <string.h>

int	main(void) {


	std::cout << "\n------------OPERATOR (+ & - ------------\n" << std::endl;

	ClassTest	a(1);
	ClassTest	b(2);

	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 5-----\n" << std::endl;
	int_vector.reserve(5);
	float_vector.reserve(5);
	string_vector.reserve(5);
	class_vector.reserve(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	int_vector.push_back(1);
	float_vector.push_back(1.1);
	string_vector.push_back("ANA 1");
	class_vector.push_back(a);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	string_vector.push_back("ANA 2");
	class_vector.push_back(b);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

{
	std::cout << "\n**operator + & - **" << std::endl;

	std::cout << "****" << std::endl;
	std::cout << "it1 = it2" << std::endl;
	ft::vector<int>::iterator it1 = int_vector.begin();
	ft::vector<int>::iterator it2 = int_vector.begin();
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;

	it1 = it1 + 1;
	std::cout << "it1 + 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;
	
	it1 = it1 - 1;
	std::cout << "it1 - 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;

	std::cout << "****" << std::endl;
}

{
	std::cout << "\n**operator + & - **" << std::endl;

	std::cout << "****" << std::endl;
	std::cout << "it1 = it2" << std::endl;
	ft::vector<float>::iterator it1 = float_vector.begin();
	ft::vector<float>::iterator it2 = float_vector.begin();
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;

	it1 = it1 + 1;
	std::cout << "it1 + 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;
	
	it1 = it1 - 1;
	std::cout << "it1 - 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;

	std::cout << "****" << std::endl;
}

{
	std::cout << "\n**operator + & - **" << std::endl;

	std::cout << "****" << std::endl;
	std::cout << "it1 = it2" << std::endl;
	ft::vector<std::string>::iterator it1 = string_vector.begin();
	ft::vector<std::string>::iterator it2 = string_vector.begin();
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;

	it1 = it1 + 1;
	std::cout << "it1 + 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;
	
	it1 = it1 - 1;
	std::cout << "it1 - 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;

	std::cout << "****" << std::endl;
}

{
	std::cout << "\n**operator + & - **" << std::endl;

	std::cout << "****" << std::endl;
	std::cout << "it1 = it2" << std::endl;
	ft::vector<ClassTest>::iterator it1 = class_vector.begin();
	ft::vector<ClassTest>::iterator it2 = class_vector.begin();
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;

	it1 = it1 + 1;
	std::cout << "it1 + 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;
	
	std::cout << "****" << std::endl;
	
	it1 = it1 - 1;
	std::cout << "it1 - 1: " << *it1 << std::endl;
	std::cout << "it1: " << *it1 << " - it2: " << *it2 << std::endl;
	std::cout << "it1 = it2: " << (it1 == it2) << std::endl;
	std::cout << "it1 != it2: " << (it1 != it2) << std::endl;
	std::cout << "it1 >= it2: " << (it1 >= it2) << std::endl;
	std::cout << "it1 <= it2: " << (it1 <= it2) << std::endl;
	std::cout << "it1 > it2: " << (it1 > it2) << std::endl;
	std::cout << "it1 < it2: " << (it1 < it2) << std::endl;

	std::cout << "****" << std::endl;
}


	return (0);
}