#ifndef PAIR_HPP
#define PAIR_HPP

namespace	ft {

	template<typename T1, typename T2>
	class pair {

		public:
			typedef T1			first_type;
			typedef T2			second_type;
		
	//	private:
			T1	first;
			T2	second;
		
		public:

			pair() : first(), second() { };

			pair(const T1& a, const T2& b) : first(a), second(b) { }

			template<typename U1, typename U2>
			pair(const pair<U1, U2>& p) : first(p.first), second(p.second) { };

	};

	template<typename T1, typename T2>
	inline bool operator==(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (lhs.first == rhs.first && lhs.second == rhs.second);
	}

	template<typename T1, typename T2>
	inline bool	operator<(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (lhs.first < rhs.first 
			|| (!(rhs.first < lhs.first) && lhs.second < rhs.second));
	}

	template<typename T1, typename T2>
	inline bool	operator!=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (!(lhs == rhs));
	}

	template<typename T1, typename T2>
	inline bool	operator>(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (rhs < lhs);
	}

	template<typename T1, typename T2>
	inline bool	operator<=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (!(rhs < lhs));
	}

	template<typename T1, typename T2>
	inline bool	operator>=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs) {
		return (!(lhs < rhs));
	}

	template<typename T1, typename T2>
	inline pair<T1, T2>	make_pair(T1 lhs, T2 rhs) {
		return (pair<T1, T2>(lhs, rhs));
	}
}

#endif