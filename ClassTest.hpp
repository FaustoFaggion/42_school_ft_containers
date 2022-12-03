#ifndef CLASSTEST_HPP
#define CLASSTEST_HPP

#include <iostream>
#include <string.h>

class ClassTest {

	public:
		int		*n;

		ClassTest() {
			std::cout << "ClassTest constructor" << std::endl;
			*n = 4;
		}
		~ClassTest() {
			std::cout << "ClassTest destructor" << std::endl;
		}

};

#endif