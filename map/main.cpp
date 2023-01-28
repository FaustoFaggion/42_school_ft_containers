#include "map.hpp"
#include <map>
#include "RbTree.hpp"
#include "node_base.hpp"

int main(void) {

	ft::map<int, std::string> ft_map;

	std::cout << "size map: " << ft_map.size() << std::endl;

	ft::pair<int, std::string>	val1(1, "one");
	ft::pair<int, std::string>	val2(2, "two");
	ft::pair<int, std::string>	val3(3, "three");
	ft::pair<int, std::string>	val4(4, "four");
	ft::pair<int, std::string>	val5(5, "five");
	ft::pair<int, std::string>	val6(6, "six");
	ft::pair<int, std::string>	val7(7, "seven");
	ft::pair<int, std::string>	val8(8, "eight");
	

	ft::pair<ft::map<int, std::string>::iterator, bool>	it;
	std::cout << "\n---------------------------";
	it = ft_map.insert(val1);
	 std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it = ft_map.insert(val2);
	 std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val3);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val4);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val5);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val6);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val7);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();
	std::cout << "\n---------------------------";
	it =  ft_map.insert(val8);
	std::cout << "it value: " << it.first->_node_value.second << std::endl;
	ft_map.print_map();

	std::cout << "\n\n";

	// ft::RbTree<int, std::pair<int, std::string>, int>	tr;
	// std::cout << "size tree: " << tr.size() << std::endl;
	
	// std::pair<int, std::string>	val1(1, "one");
	// std::pair<int, std::string>	val2(2, "two");
	// std::pair<int, std::string>	val3(3, "three");
	// std::pair<int, std::string>	val4(4, "four");
	// std::pair<int, std::string>	val5(5, "five");
	// std::pair<int, std::string>	val6(6, "six");
	// std::pair<int, std::string>	val7(7, "seven");
	// std::pair<int, std::string>	val8(8, "eight");
	
	// tr.insert(val1);
	// tr.insert(val2);
	// tr.insert(val2);
	// tr.insert(val3);
	// tr.insert(val4);
	// tr.insert(val5);
	// tr.insert(val6);
	// tr.insert(val7);
	// tr.insert(val8);


	// tr.print_tree(tr._root, 0);

	// ft::RbTree<int, std::pair<int, std::string>, int>::iterator it;
	// it = tr.begin();
	// std::cout << "it value: " << it->_node_value.second << std::endl;
	// std::cout << "\n\n";
	// std::cout << "root value: " << tr._root->_node_value.second << std::endl;
	// std::cout << "size tree: " << tr.size() << std::endl;

}