#ifndef RBTREE_HPP
#define RBTREE_HPP



namespace ft {

	struct node_base {

		private:
			typedef node_base*			Base_ptr;
			typedef const node_base*	Const_Base_ptr;
	
		private:
			int			_collor;
			Base_ptr	_left;
			Base_ptr	_right;
			Base_ptr	_p;

	};

	template<typename Val>
	struct node : public node_base {
		
		typedef node<Val>*	node_ptr;

		Val	node_value;
	};

	template<typename Key, typename Val, typename KoV, typename Compare, typename Alloc>
	class RbTree {

		typedef typename Alloc::template rebind<node<Val> >::other	node_allocator;

		protected:
			typedef node_base*			Base_ptr;
			typedef const node_base*	Const_Base_ptr;
			typedef node<Val>			node;

		public:
			typedef Key					key_type;
			typedef Val					value_type;
			typedef value_type*			pointer;
			typedef const value_type*	const_pointer;
			typedef value_type&			reference;
			typedef const value_type&	const_reference;
			typedef node*				node_ptr;
			typedef size_t				size_type;
			typedef ptrdiff_t			difference_type;
			typedef Alloc				allocator_type;
	};


};

#endif