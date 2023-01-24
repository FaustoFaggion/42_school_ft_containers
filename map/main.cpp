#include "map.hpp"
#include <map>
#include "RbTree.hpp"

int main(void) {
	
	std::map<std::string, int> o_map;
	ft::map<std::string, int> ft_map;


	std::cout << "size: " << o_map.size() << std::endl;
	std::cout << "size: " << ft_map.size() << std::endl;

	std::pair<int, std::string>	val(1, "aa");

	ft::RbTree<int, std::pair<int, std::string>, int>	tr;

	std::cout << "size tree: " << tr.size() << std::endl;
	tr.insert(val);
	std::cout << "root value: " << tr._root->_node_value.second << std::endl;
	std::cout << "size tree: " << tr.size() << std::endl;

}