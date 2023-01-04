#include "map.hpp"
#include <map>

int main(void) {

	ft::map<std::string, int> mft();
	
	std::map<std::string, int> mstd1;
	std::map<std::string, int> mstd2;

	mstd1["a"] = 1;
	mstd1.insert({"b", 2});
	mstd1.insert({"c", 3});

	for (std::map<std::string, int>::iterator it = mstd1.begin(); it != mstd1.end(); it++) {

	}

}