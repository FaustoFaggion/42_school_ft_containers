#ifndef NODE_BASE_HPP
#define NODE_BASE_HPP

#include "pair.hpp"

namespace ft {

	enum	node_color {RED, BLACK};

/*
	struct node_base
	{
		typedef node_base*			base_ptr;
		typedef const node_base*	const_base_ptr;

		node_color	_color;
		base_ptr	_left;
		base_ptr	_right;
		base_ptr	_p;

		node_base(void)
		{
			_color = RED;
			_left = NULL;
			_right = NULL;
			_p = NULL;
		}
	};
*/	

	template<typename Val>
	struct node_tree
	{
		typedef node_tree<Val>*	node_ptr;
		typedef const node_tree<Val>* const_node_ptr;

		node_color	_color;
		node_ptr	_left;
		node_ptr	_right;
		node_ptr	_p;
		Val			_node_value;

		
		node_tree() : _node_value(Val())
		{
			std::cout << "default constructor called" << std::endl;
			_color = RED;
			_left = NULL;
			_right = NULL;
			_p = NULL;
		}

		explicit node_tree(Val value) : _node_value(value)
		{
			std::cout << "value constructor called" << std::endl;
			_color = RED;
			_left = NULL;
			_right = NULL;
			_p = NULL;
		}
	};
};

#endif