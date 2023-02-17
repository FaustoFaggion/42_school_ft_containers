#ifndef INTEGRAL_TYPE_TRAITS_HPP
#define INTEGRAL_TYPE_TRAITS_HPP

namespace ft
{
//	enable_if

	template< bool Condition, class T = void >
	struct enable_if {
	};

	template<class T>
	struct enable_if<true, T> { 
		typedef T type;
	};


	// template <class T, T v>
	// struct integral_constant {
	// 	static const T value = v;
	// 	typedef T value_type;
	// 	typedef integral_constant<T,v> type;
	// 	operator T() const{ return v; };
	// };

	template<typename T>
	struct is_integral {
		static const bool value = false;
	};
	
	template<>
	struct is_integral<bool> {
		static const bool value = true;
	};

	template<>
	struct is_integral<char> {
		static const bool value = true;
	};

	template<>
	struct is_integral<signed char> {
		static const bool value = true;
	};

	template<>
	struct is_integral<short int> {
		static const bool value = true;
	};

	template<>
	struct is_integral<int> {
		static const bool value = true;
	};
	
	template<>
	struct is_integral<long int> {
		static const bool value = true;
	};

	template<>
	struct is_integral<long long int> {
		static const bool value = true;
	};

	template<>
	struct is_integral<unsigned char> {
		static const bool value = true;
	};
	
	template<>
	struct is_integral<unsigned short int> {
		static const bool value = true;
	};

		template<>
	struct is_integral<unsigned int> {
		static const bool value = true;
	};

	template<>
	struct is_integral<unsigned long int> {
		static const bool value = true;
	};

	template<>
	struct is_integral<unsigned long long int> {
		static const bool value = true;
	};
}



#endif