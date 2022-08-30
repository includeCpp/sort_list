#include "sorting_algorithms.hpp"

#include <iostream>
#include <algorithm>
#include <vector>

struct cmp{
	template<typename T, typename Q>
		bool operator()(T lhs, Q rhs){
			return lhs > rhs;
		}
};

struct cmp_2{
		template<typename T, typename Q>
		bool operator()(T lhs, Q rhs){
			return lhs < rhs;
		}
};

int main(){
	//list of sorts
	std::cout << "\nBubble sort" << std::endl; 
	std::vector<int> my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	sorting_algorithms::bsort<std::vector<int>, cmp>(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
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
	sorting_algorithms::qsort<std::vector<int>, cmp, cmp_2>(0, 16, my_vec); //works without third template argument
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
}
