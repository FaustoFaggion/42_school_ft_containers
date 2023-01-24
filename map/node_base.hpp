#ifndef NODE_BASE_HPP
#define NODE_BASE_HPP

namespace ft {

	enum	node_color {RED, BLACK};
	
	template<typename Val>
	struct node_tree {
		
		typedef node_tree<Val>*	node_ptr;
		typedef const node_tree<Val>* const_node_ptr;

		node_color	_color;
		node_ptr	_left;
		node_ptr	_right;
		node_ptr	_p;
		Val			_node_value;

		node_tree() : _node_value(Val()) {
			_color = BLACK;
			_left = NULL;
			_right = NULL;
			_p = NULL;
		}
	};
};

#endif