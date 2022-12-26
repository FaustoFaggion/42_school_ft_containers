#include "../ClassTest.hpp"
#include "../vector.hpp"
#include <string.h>

int	main(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	int_vector.reserve(10);

	std::cout << "\n------int push_back1------\n" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana 12");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold 14");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;
	int_vector.push_back(16);
	float_vector.push_back(16.1);
	string_vector.push_back("Arnoldoca 16");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back4------\n" << std::endl;
	int_vector.push_back(18);
	float_vector.push_back(18.1);
	string_vector.push_back("Arnoljones 18");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------erase------\n" << std::endl;
	int_vector.erase(int_vector.begin() + 1, int_vector.begin() + 3);
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	float_vector.erase(float_vector.begin() + 1, float_vector.begin() + 3);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.erase(string_vector.begin() + 1, string_vector.begin() + 3);
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back2------\n" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------erase------\n" << std::endl;
	class_vector.erase(class_vector.begin() + 1, class_vector.begin() + 3);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}
