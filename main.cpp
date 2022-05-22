#include "data_structures.cpp"

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::cout << "\nBubble sort" << std::endl; 
	std::vector<int> my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::bsort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Shaker sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::shake_sort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Hair sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::hair_sort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Insertion sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::insertion_sort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Selection sort" << std::endl;
	my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::selection_sort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Double selection sort" << std::endl;
	my_vec = {3, 5, 32, 1, 10, 2, 50, 0, 4, 9, 13, 6, 101, 322, 19 ,8, 7};
	data_structures::double_selection_sort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}