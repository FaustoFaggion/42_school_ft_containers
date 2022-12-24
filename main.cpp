#include "ClassTest.hpp"
#include <vector>
#include "vector.hpp"
#include <string.h>

//#ifdef STD
//namespace ft = std;
//#else
//#include "vector.hpp"
//#endif

//static void	vector_resize(void);
//static void	vector_reserve(void);
//static void	vector_push_back(void);
//static void	vector_at(void);
//static void	vector_back(void);
//static void	vector_front(void);
//static void	vector_pop_back(void);
//static void	vector_end(void);
//static void	vector_operators_mais_menos(void);
//static void	vector_assign2(void);
//static void	vector_erase(void);
//static void	vector_erase2(void);
//static void	vector_insert_element(void);
//static void	vector_insert_range(void);

int	main(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig(10, 55);
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana 12");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(112);
	float_vector.push_back(112.1);
	string_vector.push_back("Ana 112");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold 14");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(114);
	float_vector.push_back(114.1);
	string_vector.push_back("Arnold 114");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(16);
	float_orig.push_back(16.1);
	string_orig.push_back("Arnoldoca 16");
	std::cout << int_orig[2] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[2] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[2] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(116);
	float_vector.push_back(116.1);
	string_vector.push_back("Arnoldoca 116");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back4------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(18);
	float_orig.push_back(18.1);
	string_orig.push_back("Arnoljones 18");
	std::cout << int_orig[3] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[3] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[3] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(118);
	float_vector.push_back(118.1);
	string_vector.push_back("Arnoljones 118");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back5------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(20);
	float_orig.push_back(20.1);
	string_orig.push_back("Arnoljones 20");
	std::cout << int_orig[4] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[4] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[4] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(120);
	float_vector.push_back(120.1);
	string_vector.push_back("Arnoljones 120");
	std::cout << int_vector[4] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[4] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[4] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------insert------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.insert(int_orig.begin() + 4, int_vector.begin(), int_vector.begin() + 3);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.insert(float_orig.begin() + 4, float_vector.begin(), float_vector.begin() + 3);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.insert(string_orig.begin() + 4, string_vector.begin(), string_vector.begin() + 3);
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;


	std::cout << "\n--ft--" << std::endl;
	int_vector.insert(int_vector.begin() + 2, int_orig.begin(), (int_orig.begin() + 3));
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	float_vector.insert(float_vector.begin() + 2, float_orig.begin(), (float_orig.begin() + 3));
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.insert(string_vector.begin() + 2, string_orig.begin(), (string_orig.begin() + 3));
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(c);
	std::cout << class_orig[2] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	std::cout << "\n------insert fill------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.insert(class_orig.begin() + 1, 8, c);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.insert(class_vector.begin() + 1, 8, c);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	return (0);
}

// static void	vector_resize(void) {
	
// 	std::cout << "\n------------Constructor------------\n" << std::endl;

// 	std::cout << "--orig--" << std::endl;
// 	std::vector<int> int_orig;
// 	std::vector<float> float_orig;
// 	std::vector<ClassTest> class_orig;
// 	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	ft::vector<int> int_vector;
// 	ft::vector<float> float_vector;
// 	ft::vector<ClassTest> class_vector;
// 	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
// 	std::cout << "\n------resize 1------\n" << std::endl;
	
// 	std::cout << "--orig--" << std::endl;
// 	int_orig.resize(1);
// 	float_orig.resize(1);
// 	class_orig.resize(1);
// 	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	int_vector.resize(1);
// 	float_vector.resize(1);
// 	class_vector.resize(1);
// 	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
// 	std::cout << "\n------resize 2------\n" << std::endl;
	
// 	std::cout << "--orig--" << std::endl;
// 	int_orig.resize(2);
// 	float_orig.resize(2);
// 	class_orig.resize(2);
// 	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	int_vector.resize(2);
// 	float_vector.resize(2);
// 	class_vector.resize(2);
// 	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
// 	std::cout << "\n------resize 5------\n" << std::endl;
	
// 	std::cout << "--orig--" << std::endl;
// 	int_orig.resize(5);
// 	float_orig.resize(5);
// 	class_orig.resize(5);
// 	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	int_vector.resize(5);
// 	float_vector.resize(5);
// 	class_vector.resize(5);
// 	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
// 	std::cout << "\n------resize 1------\n" << std::endl;
	
// 	std::cout << "--orig--" << std::endl;
// 	int_orig.resize(1);
// 	float_orig.resize(1);
// 	class_orig.resize(1);
// 	std::cout << "\n<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "\n<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "\n<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	int_vector.resize(1);
// 	float_vector.resize(1);
// 	class_vector.resize(1);
// 	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

// 	std::cout << "\n------resize 0------\n" << std::endl;
	
// 	std::cout << "--orig--" << std::endl;
// 	int_orig.resize(0);
// 	float_orig.resize(0);
// 	class_orig.resize(0);
// 	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
// 	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
// 	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

// 	std::cout << "--ft--" << std::endl;
// 	int_vector.resize(0);
// 	float_vector.resize(0);
// 	class_vector.resize(0);
// 	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
// 	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
// 	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

// }

/*static void	vector_reserve(void) {
	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 1-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(1);
	float_orig.reserve(1);
	string_orig.reserve(1);
	class_orig.reserve(1);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(1);
	float_vector.reserve(1);
	string_vector.reserve(1);
	class_vector.reserve(1);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 3-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(3);
	float_orig.reserve(3);
	string_orig.reserve(3);
	class_orig.reserve(3);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(3);
	float_vector.reserve(3);
	string_vector.reserve(3);
	class_vector.reserve(3);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(2);
	float_orig.reserve(2);
	string_orig.reserve(2);
	class_orig.reserve(2);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	string_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	string_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	string_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 2-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(2);
	float_orig.reserve(2);
	string_orig.reserve(2);
	class_orig.reserve(2);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(2);
	float_vector.reserve(2);
	string_vector.reserve(2);
	class_vector.reserve(2);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}*/

/*static void vector_push_back(void) {
	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	class_orig.push_back(a);
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	class_vector.push_back(a);
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	class_orig.push_back(a);
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	class_vector.push_back(a);
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	

	std::cout << "\n--resize 5--" << std::endl;
	std::cout << "--orig--" << std::endl;
	int_orig.resize(5);
	float_orig.resize(5);
	class_orig.resize(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.resize(5);
	float_vector.resize(5);
	class_vector.resize(5);
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------push_back after resize------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(10);
	float_orig.push_back(10.1);
	class_orig.push_back(a);
	std::cout << int_orig[5] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[5] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[5] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(10);
	float_vector.push_back(10.1);
	class_vector.push_back(a);
	std::cout << int_vector[5] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[5] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[5] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
}*/

/*static void	vector_at(void) {

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	

	std::cout << "\n--at--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	class_orig.push_back(a);
	std::cout << "at: " << int_orig.at(0) << std::endl;
	std::cout << "at: " << class_orig.at(0) << std::endl;
	
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	class_vector.push_back(a);
	std::cout << "at: " << int_vector.at(0) << std::endl;
	std::cout << "at: " << class_vector.at(0) << std::endl;

	std::cout << "at: " << int_orig.at(2) << std::endl;
//	std::cout << "at: " << class_orig.at(2) << std::endl;
//	std::cout << "at: " << int_vector.at(2) << std::endl;
//	std::cout << "at: " << class_vector.at(2) << std::endl;
}*/

/*static void	vector_back(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n--back--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << "back: " << int_orig.back() << std::endl;
	std::cout << "back: " << float_orig.back() << std::endl;
	std::cout << "back: " << class_orig.back() << std::endl;
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	std::cout << "back: " << int_vector.back() << std::endl;
	std::cout << "back: " << float_vector.back() << std::endl;
	std::cout << "back: " << class_vector.back() << std::endl;
}*/

/*static void	vector_front(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n--front--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << "back: " << int_orig.front() << std::endl;
	std::cout << "front: " << float_orig.front() << std::endl;
	std::cout << "front: " << class_orig.front() << std::endl;
	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	std::cout << "front: " << int_vector.front() << std::endl;
	std::cout << "front: " << float_vector.front() << std::endl;
	std::cout << "front: " << class_vector.front() << std::endl;
	
}*/

/*static void	vector_pop_back(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(7);
	ClassTest	b(9);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	
	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------reserve 4-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(4);
	float_orig.reserve(4);
	class_orig.reserve(4);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(4);
	float_vector.reserve(4);
	class_vector.reserve(4);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--push_back--" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(2);
	float_orig.push_back(2.1);
	class_orig.push_back(2);
	int_orig.push_back(4);
	float_orig.push_back(4.1);
	class_orig.push_back(4);
	std::cout << int_orig.back() << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig.back() << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "back: " << class_orig.back() << " <class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(2);
	float_vector.push_back(2.1);
	class_vector.push_back(2);
	int_vector.push_back(4);
	float_vector.push_back(4.1);
	class_vector.push_back(4);
	class_vector.push_back(6);
	std::cout << int_vector.back() << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector.back() << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "back: " << class_vector.back() << " <class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n--pop_back--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.pop_back();
	float_orig.pop_back();
	class_orig.pop_back();
	std::cout << int_orig.back() << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig.back() << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "back: " << class_orig.back() << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;	

	std::cout << "\n--ft--" << std::endl;
	int_vector.pop_back();
	float_vector.pop_back();
	class_vector.pop_back();
	std::cout << int_vector.back() << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector.back() << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "back: " << class_vector.back() << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--pop_back 2--" << std::endl;
	
	std::cout << "\n--orig--" << std::endl;
	int_orig.pop_back();
	float_orig.pop_back();
	class_orig.pop_back();

	std::cout << "\n--ft--" << std::endl;
	int_vector.pop_back();
	float_vector.pop_back();
	class_vector.pop_back();
}*/

/*static void	vector_end(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 5-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(5);
	float_orig.reserve(5);
	class_orig.reserve(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(5);
	float_vector.reserve(5);
	class_vector.reserve(5);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	class_orig.push_back(a);
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	class_vector.push_back(a);
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	class_orig.push_back(b);
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	class_vector.push_back(b);
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------end------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	for(std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	
	std::cout << "\n--ft--" << std::endl;
	for(ft::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "----" << std::endl;
	for(ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << "----" << std::endl;
	for(ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}

}*/

/*static void	vector_operators_mais_menos(void) {

	ClassTest	a(2);
	ClassTest	b(6);

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<ClassTest> class_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<ClassTest> class_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------reserve 5-----\n" << std::endl;
	
	std::cout << "--orig--" << std::endl;
	int_orig.reserve(5);
	float_orig.reserve(5);
	class_orig.reserve(5);
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<int> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	int_vector.reserve(5);
	float_vector.reserve(5);
	class_vector.reserve(5);
	std::cout << "<ft int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<ft int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<ft class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	class_orig.push_back(a);
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	class_vector.push_back(a);
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	class_orig.push_back(b);
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	class_vector.push_back(b);
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--operator +--" << std::endl;

	std::vector<int>::iterator it1 = int_orig.begin();
	it1 = it1 + 1;
	std::cout << "it1 + 1: " << *it1 << std::endl;

	std::vector<int>::iterator it2 = int_orig.begin();
	it2 = 1 + it2;
	std::cout << "1 + it2: " << *it2 << std::endl;

	ft::vector<int>::iterator it1_ft = int_vector.begin();
	it1_ft = it1_ft + 1;
	std::cout << "it1_ft + 1: " << *it1_ft << std::endl;
	
	ft::vector<int>::iterator it2_ft = int_vector.begin();
	it2_ft = 1 + it2_ft;
	std::cout << "1 + it2_ft: " << *it2_ft << std::endl;
	
	std::cout << "\n**operator- **" << std::endl;

	it1 = it1 - 1;
	std::cout << "it1 - 1: " << *it1 << std::endl;

//	Função não existe na vector original
//	it2 = 1 - it2;
//	std::cout << "it2: " << *it2 << std::endl;

	it1_ft = it1_ft - 1;
	std::cout << "it1_ft - 1: " << *it1_ft << std::endl;
	
//	Função não existe na vector original
//	it2_ft = 1 - it2_ft;
//	std::cout << "1 - it2_ft: " << *it2_ft << std::endl;
}*/

/*static void	vector_assign2(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(6);
//	ClassTest	c(b);


	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;
	
	std::cout << "\n------assign------\n" << std::endl;
	std::cout << "--orig--" << std::endl;

	int_orig.assign(1, 33);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	
	float_orig.assign(2, 33.1);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.assign(4, "Bela");
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	string_orig.assign(2, "Bela");
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;

	int_vector.assign(1, 33);
	for (ft::vector<int>::iterator it = int_vector.begin(); it != int_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	float_vector.assign(2, 33.1);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.assign(4, "Bela");
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	string_vector.assign(2, "Bela");
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------assign------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.assign(2, 33);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;


	class_orig.assign(4, 12);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;
	class_orig.assign(2, 33);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.assign(1, 33);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(0) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	class_vector.assign(4, 12);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(1) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
	class_vector.assign(2, 33);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout << class_vector.at(1) << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	return (0);
}*/

/*static void	vector_erase(void){
	
	std::cout << "\n------------Constructor------------\n" << std::endl;


	ClassTest	a(2);
	ClassTest	b(6);
//	ClassTest	c(b);


	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.erase(int_orig.begin() + 1);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.erase(float_orig.begin() + 1);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.erase(string_orig.begin() + 1);
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.erase(int_vector.begin() + 1);
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	float_vector.erase(float_vector.begin() + 1);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.erase(string_vector.begin() + 1);
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.erase(class_orig.begin() + 1);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.erase(class_vector.begin() + 1);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;
}*/

/*static void	vector_erase(void) {

		std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	int_vector.reserve(10);

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana 12");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana 12");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold 14");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold 14");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(16);
	float_orig.push_back(16.1);
	string_orig.push_back("Arnoldoca 16");
	std::cout << int_orig[2] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[2] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[2] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(16);
	float_vector.push_back(16.1);
	string_vector.push_back("Arnoldoca 16");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back4------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(18);
	float_orig.push_back(18.1);
	string_orig.push_back("Arnoljones 18");
	std::cout << int_orig[3] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[3] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[3] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(18);
	float_vector.push_back(18.1);
	string_vector.push_back("Arnoljones 18");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.erase(int_orig.begin() + 1);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.erase(float_orig.begin() + 1);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.erase(string_orig.begin() + 1);
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.erase(int_vector.begin() + 1);
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	
	float_vector.erase(float_vector.begin() + 1);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.erase(string_vector.begin() + 1);
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(c);
	std::cout << class_orig[2] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.erase(class_orig.begin() + 1);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.erase(class_vector.begin() + 1);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}*/

/*static void	vector_erase2(void) {

		std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	int_vector.reserve(10);

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana 12");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana 12");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold 14");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold 14");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(16);
	float_orig.push_back(16.1);
	string_orig.push_back("Arnoldoca 16");
	std::cout << int_orig[2] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[2] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[2] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(16);
	float_vector.push_back(16.1);
	string_vector.push_back("Arnoldoca 16");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back4------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(18);
	float_orig.push_back(18.1);
	string_orig.push_back("Arnoljones 18");
	std::cout << int_orig[3] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[3] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[3] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(18);
	float_vector.push_back(18.1);
	string_vector.push_back("Arnoljones 18");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.erase(int_orig.begin() + 1, int_orig.begin() + 3);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.erase(float_orig.begin() + 1, float_orig.begin() + 3);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.erase(string_orig.begin() + 1, string_orig.begin() + 3);
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;


	std::cout << "\n--ft--" << std::endl;
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

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(c);
	std::cout << class_orig[2] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	std::cout << "\n------erase------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.erase(class_orig.begin() + 1, class_orig.begin() + 3);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.erase(class_vector.begin() + 1, class_vector.begin() + 3);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}*/

/*static void	vector_insert_element(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------push_back1------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana 12");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana 12");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold 14");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold 14");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------push_back3------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(16);
	float_orig.push_back(16.1);
	string_orig.push_back("Arnoldoca 16");
	std::cout << int_orig[2] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[2] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[2] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(16);
	float_vector.push_back(16.1);
	string_vector.push_back("Arnoldoca 16");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------push_back4------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(18);
	float_orig.push_back(18.1);
	string_orig.push_back("Arnoljones 18");
	std::cout << int_orig[3] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[3] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[3] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(18);
	float_vector.push_back(18.1);
	string_vector.push_back("Arnoljones 18");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------insert------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	std::cout<< "insert: " << *(int_orig.insert(int_orig.end(), 100)) << std::endl;
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.insert(float_orig.end(), 100.2);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.insert(string_orig.end(), "Inserted element");
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;


	std::cout << "\n--ft--" << std::endl;
	std::cout<< "insert: " << *(int_vector.insert(int_vector.end() , 100)) << std::endl;
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	float_vector.insert(float_vector.end(), 100.2);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.insert(string_vector.end(), "inserted element");
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(c);
	std::cout << class_orig[2] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	std::cout << "\n------insert------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.insert(class_orig.begin() + 1, c);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.insert(class_vector.begin() + 1, c);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.insert(class_orig.begin() + 1, c);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.insert(class_vector.begin() + 1, c);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}*/

/*static void	vector_insert_range(void) {

	std::cout << "\n------------Constructor------------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	std::vector<int> int_orig;
	std::vector<float> float_orig;
	std::vector<std::string> string_orig;
	std::cout << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<int> int_vector;
	ft::vector<float> float_vector;
	ft::vector<std::string> string_vector;
	std::cout << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << "<int> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	int_orig.push_back(12);
	float_orig.push_back(12.1);
	string_orig.push_back("Ana 12");
	std::cout << int_orig[0] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[0] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[0] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(12);
	float_vector.push_back(12.1);
	string_vector.push_back("Ana 12");
	std::cout << int_vector[0] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[0] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[0] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(14);
	float_orig.push_back(14.1);
	string_orig.push_back("Arnold 14");
	std::cout << int_orig[1] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[1] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[1] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(14);
	float_vector.push_back(14.1);
	string_vector.push_back("Arnold 14");
	std::cout << int_vector[1] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[1] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[1] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(16);
	float_orig.push_back(16.1);
	string_orig.push_back("Arnoldoca 16");
	std::cout << int_orig[2] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[2] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[2] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(16);
	float_vector.push_back(16.1);
	string_vector.push_back("Arnoldoca 16");
	std::cout << int_vector[2] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[2] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[2] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back4------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(18);
	float_orig.push_back(18.1);
	string_orig.push_back("Arnoljones 18");
	std::cout << int_orig[3] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[3] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[3] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(18);
	float_vector.push_back(18.1);
	string_vector.push_back("Arnoljones 18");
	std::cout << int_vector[3] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[3] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[3] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;

	std::cout << "\n------int push_back5------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.push_back(20);
	float_orig.push_back(20.1);
	string_orig.push_back("Arnoljones 20");
	std::cout << int_orig[4] << "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;
	std::cout << float_orig[4] << "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	std::cout << string_orig[4] << "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	int_vector.push_back(20);
	float_vector.push_back(20.1);
	string_vector.push_back("Arnoljones 20");
	std::cout << int_vector[4] << "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;
	std::cout << float_vector[4] << "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	std::cout << string_vector[4] << "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------insert------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	int_orig.insert(int_orig.end() - 2, 8, 100);
	for (std::vector<int>::iterator it = int_orig.begin(); it != int_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << int_orig.size() << " max_size: " << int_orig.max_size() << " capacity: " << int_orig.capacity() << " empty: " << int_orig.empty() << std::endl;

	float_orig.insert(float_orig.end() - 2, 8, 100);
	for (std::vector<float>::iterator it = float_orig.begin(); it != float_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_orig.size() << " max_size: " << float_orig.max_size() << " capacity: " << float_orig.capacity() << " empty: " << float_orig.empty() << std::endl;
	
	string_orig.insert(string_orig.end() - 2, 8, "Annita");
	for (std::vector<std::string>::iterator it = string_orig.begin(); it != string_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_orig.size() << " max_size: " << string_orig.max_size() << " capacity: " << string_orig.capacity() << " empty: " << string_orig.empty() << std::endl;


	std::cout << "\n--ft--" << std::endl;
	int_vector.insert(int_vector.end() - 2, 8, 100);
	for (ft::vector<int>::iterator it_ = int_vector.begin(); it_ != int_vector.end(); it_++) {
		std::cout << *it_ << std::endl;
	}
	std::cout<< "<int> size: " << int_vector.size() << " max_size: " << int_vector.max_size() << " capacity: " << int_vector.capacity() << " empty: " << int_vector.empty() << std::endl;

	float_vector.insert(float_vector.end() - 2, 8, 100);
	for (ft::vector<float>::iterator it = float_vector.begin(); it != float_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << float_vector.size() << " max_size: " << float_vector.max_size() << " capacity: " << float_vector.capacity() << " empty: " << float_vector.empty() << std::endl;
	
	string_vector.insert(string_vector.end() - 2, 8, "Annita");
	for (ft::vector<std::string>::iterator it = string_vector.begin(); it != string_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<string> size: " << string_vector.size() << " max_size: " << string_vector.max_size() << " capacity: " << string_vector.capacity() << " empty: " << string_vector.empty() << std::endl;


	std::cout << "\n------------Constructor------------\n" << std::endl;

	ClassTest	a(2);
	ClassTest	b(4);
	ClassTest	c(6);

	std::cout << "\n--orig--" << std::endl;
	std::vector<ClassTest> class_orig;

	std::cout << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "--ft--" << std::endl;
	ft::vector<ClassTest> class_vector;
	std::cout << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	std::cout << "\n------int push_back1------\n" << std::endl;
	

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(a);
	std::cout << class_orig[0] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(a);
	std::cout << class_vector[0] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

	
	std::cout << "\n------int push_back2------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(b);
	std::cout << class_orig[1] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(b);
	std::cout << class_vector[1] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

		std::cout << "\n------int push_back3------\n" << std::endl;

	std::cout << "--orig--" << std::endl;
	class_orig.push_back(c);
	std::cout << class_orig[2] << "<class> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.push_back(c);
	std::cout << class_vector[2] << "<class> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;


	std::cout << "\n------insert fill------\n" << std::endl;

	std::cout << "\n--orig--" << std::endl;
	class_orig.insert(class_orig.begin() + 1, 8, c);
	for (std::vector<ClassTest>::iterator it = class_orig.begin(); it != class_orig.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<int> size: " << class_orig.size() << " max_size: " << class_orig.max_size() << " capacity: " << class_orig.capacity() << " empty: " << class_orig.empty() << std::endl;

	std::cout << "\n--ft--" << std::endl;
	class_vector.insert(class_vector.begin() + 1, 8, c);
	for (ft::vector<ClassTest>::iterator it = class_vector.begin(); it != class_vector.end(); it++) {
		std::cout << *it << std::endl;
	}
	std::cout<< "<float> size: " << class_vector.size() << " max_size: " << class_vector.max_size() << " capacity: " << class_vector.capacity() << " empty: " << class_vector.empty() << std::endl;

}
*/
