#ifndef CLASSTEST_HPP
#define CLASSTEST_HPP

#include <iostream>
#include <string.h>

class ClassTest {

	public:
		int		*n;

		ClassTest() {
			std::cout << "ClassTest constructor" << std::endl;
			n = new int(4);
		}
		~ClassTest() {
			std::cout << "ClassTest destructor" << std::endl;
			delete(n);
		}
		ClassTest(ClassTest const & rsc) {
			*this = rsc;
		}

		ClassTest const	&operator=(ClassTest const &rhs);
};

ClassTest const	&ClassTest::operator=(ClassTest const &rhs) {
	std::cout << "ClassTest operator= called" << std::endl;
	this->n = new int(4);
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &lhs, ClassTest &rhs) {
	lhs << *(rhs).n;
	return (lhs);
}

#endif