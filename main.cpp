#include "sorting_algorithms.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

struct user_cmp{
		template<typename T, typename Q>
		bool operator()(T lhs, Q rhs){
			return lhs < rhs;
		}
	}; 

int main(){
	//list of sorts
	std::cout << "\nBubble sort" << std::endl; 
	std::vector<int> my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::bsort(my_vec);
	sorting_algorithms::bsort<std::vector<int>, user_cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	/*std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Shaker sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::shake_sort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Comb sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::comb_sort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Insertion sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::insertion_sort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Selection sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::selection_sort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Double selection sort" << std::endl;
	my_vec = {3, 5, 32, 1, 10, 2, 50, 0, 4, 9, 13, 6, 101, 322, 19 ,8, 7};
	sorting_algorithms::double_selection_sort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Quick sort" << std::endl;
	my_vec = {9, 12, 10, 8, 11, 3, 6, 4, 2, 5, 1, 7, 8, 89, 45, 55};
	sorting_algorithms::qsort<std::vector<int>, cmp>(0, 16, my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Radix sort" << std::endl;
	my_vec = {9, 120, 10, 80, 112, 331, 6, 4, 25, 5, 13, 7};
	sorting_algorithms::radix_sort(3, 12, my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Even_odd sort" << std::endl;
	my_vec = {9, 120, 3, 17, 114, 331, 6, 4, 17, 53, 61, 31, 85, 27, 13, 11, 57, 67, 87, 40, 52};
	sorting_algorithms::even_odd(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	sorting_algorithms::qsort<std::vector<int>, even_odd_cmp>(my_vec);*/



	return 0;
}
