#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

namespace ft {

	template<typename InputIterator1, typename InputIterator2>
	bool equal(InputIterator1 first1, InputIterator1 last1, InputIterator2 first2) {
		for (; first1 != last1; first1++, first2++) {
			if (*first1 != *first2)
				return  (false);
		}
		return (true);
	}

	template<typename InputIterator1, typename InputIterator2, typename BinaryPredicate>
	bool equal(InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, BinaryPredicate pred) {
		for (; first1 != last1; first1++, first2++) {
			if (pred(*first1, *first2))
				return  (false);
		}
		return (true);
	}

	/*Returns true if the range [first1,last1) compares lexicographically 
	less than the range [first2,last2).*/
	template<typename InputIterator1, typename InputIterator2>
	bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
		InputIterator2 first2, InputIterator2 last2)
		{
			for (; (first1 != last1) && (first2 != last2); ++first1, ++first2) {
				if (*first1 < *first2)
					return true;
				if (*first2 < *first1)
					return false;
			}
			return (first1 == last1) && (first2 != last2);
		}

	template<typename InputIterator1, typename InputIterator2, class Compare>
	bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
		InputIterator2 first2, InputIterator2 last2, Compare comp)
		{
			for (; (first1 != last1) && (first2 != last2); ++first1, ++first2) {
				if (comp(*first1, *first2))
					return true;
				if (comp(*first2, *first1))
					return false;
			}
			return (first1 == last1) && (first2 != last2);
		}



}


#endif