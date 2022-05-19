#include "data_structures.cpp"

#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::vector<int> my_vec = {3, 5, 1, 2, 0, 4, 9, 6, 8, 7};
	data_structures::bsort(my_vec);
	for(int i = 0; i < my_vec.size(); ++i){
		std::cout << my_vec[i] << " ";
	}
	std::cout << std::endl;
}