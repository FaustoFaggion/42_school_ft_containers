#include "map.hpp"
#include <map>
#include "RbTree.hpp"
#include "node_base.hpp"

int main(void) {

	ft::RbTree<int, std::pair<int, std::string>, int>	tr;
	std::cout << "size tree: " << tr.size() << std::endl;
	
	std::pair<int, std::string>	val1(1, "one");
	std::pair<int, std::string>	val2(2, "two");
	std::pair<int, std::string>	val3(3, "three");
	std::pair<int, std::string>	val4(4, "four");
	std::pair<int, std::string>	val5(5, "five");
	std::pair<int, std::string>	val6(6, "six");
	std::pair<int, std::string>	val7(7, "seven");
	std::pair<int, std::string>	val8(8, "eight");
	
	tr.insert(val1);
	tr.insert(val2);
	tr.insert(val2);
	tr.insert(val3);
	tr.insert(val4);
	tr.insert(val5);
	tr.insert(val6);
	tr.insert(val7);
	tr.insert(val8);


	tr.print_tree(tr._root, 0);

	std::cout << "\n\n";
	std::cout << "root value: " << tr._root->_node_value.second << std::endl;
	std::cout << "size tree: " << tr.size() << std::endl;

}