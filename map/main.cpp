#include "map.hpp"
#include <map>

int main(void) {

	ft::map<std::string, int> mft();
	
	std::map<std::string, int> o_map;
	ft::map<std::string, int> ft_map;


	std::cout << "size: " << o_map.size() << std::endl;
	std::cout << "size: " << ft_map.size() << std::endl;
}