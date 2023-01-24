#ifndef NODE_BASE_HPP
#define NODE_BASE_HPP

namespace ft {

	enum	node_color {RED, BLACK};

	struct node_base
	{
			typedef node_base*			base_ptr;
			typedef const node_base*	const_base_ptr;
	
			node_color	_collor;
			base_ptr	_left;
			base_ptr	_right;
			base_ptr	_p;
	};

	template<typename Val>
	struct node_tree : public node_base {
		
		typedef node_tree<Val>*	node_ptr;

		Val	node_value;
	};
};

#endif