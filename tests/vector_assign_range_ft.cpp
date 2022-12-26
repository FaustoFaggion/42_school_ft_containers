#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <string.h>

int	main(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);
//	ClassTest	c(b);


	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	int_vector.push_back(22);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;
	int_vector.push_back(24);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	
	std::cout << "\n------assign------\n" << std::endl;
	ft::vector<int> int_assing(5, 55);
	ft::vector<float> float_assing(5, 55.4);
	ft::vector<std::string> string_assing(5, "ss");

	int_vector.assign(int_assing.begin(), int_assing.end());
	for (ft::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	float_vector.assign(float_assing.begin(), float_assing.end());
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.assign(string_assing.begin(), string_assing.end());
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------------Constructor------------\n" << std::endl;

	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back2------\n" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------assign------\n" << std::endl;

	ft::vector<ClassTest> class_assing(8, a);
	
	class_vector.assign(2, 33);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(0) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	class_vector.assign(4, 12);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(1) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	class_vector.assign(class_assing.begin(), class_assing.end());
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(1) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}