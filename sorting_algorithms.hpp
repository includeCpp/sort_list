#ifndef __SORTING_ALGORITHMS_HPP__
#define __SORTING_ALGORITHMS_HPP__

#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<math.h>

namespace sorting_algorithms{
	struct cmp{
		template<typename T, typename Q>
		bool operator()(T lhs, Q rhs){
			return lhs < rhs;
		}
	};

	template<typename T, typename Comp = cmp>
	void bsort(T& array){   	                  //O(n^2)		
		Comp cmp; 	
		for(size_t i = 0; i < array.size(); ++i){                   
			for(size_t j = 0; j < array.size() - 1; ++j){
				if(cmp(array[j + 1], array[j])){
					std::swap(array[j], array[j + 1]);
				}
			}
		}
	}

	//Sometimes this sort algorithm doesn't work properly. TODO fix.
	template<typename T, typename Comp = cmp>
	void shake_sort(T& array){                    //O(n^2)
		Comp cmp;
		size_t leftMark = 0;
		size_t rightMark = array.size() - 1;                        
		while(leftMark < rightMark){
			for(size_t i = leftMark; i <= rightMark; ++i){
				if(cmp(array[i + 1], array[i])){
					std::swap(array[i], array[i + 1]);
				}
			}
			rightMark--;

			for(size_t i = rightMark; i > leftMark; --i){
				if(cmp(array[i], array[i - 1])){
					std::swap(array[i], array[i - 1]);
				}
			}
			leftMark++;
		}
	}

	template<typename T, typename Comp = cmp>
	void comb_sort(T& array){                      //O(n log n)
		Comp cmp;                                   
		size_t n = array.size() - 1;
		size_t s = n;
		size_t k;
		size_t tmp;
		while(n > 1){
			// 1.247 is a specific constant for comb sort
			s /= 1.247f;
			if(s < 1) s = 1;
			k = 0;
			for(size_t i = 0; i + s <= n; ++i){
				if(cmp(array[i + s], array[i])){
					tmp = array[i];
					array[i] = array[i + s];
					array[i + s] = tmp;
					k = i;
				}
			}
			if(s == 1) n = k + 1;
		}
	}

	template<typename T, typename Comp = cmp>
	void insertion_sort(T& array){
		Comp cmp;
		for(size_t i = 1; i < array.size(); ++i){                     
			for(size_t j = i; j > 0 && cmp(array[j], array[j - 1]); j--){
				std::swap(array[j - 1], array[j]);
			}
		}
	}

	template<typename T, typename Comp = cmp>
	void selection_sort(T& array){                   //O(n^2)
		Comp cmp;                               
		size_t min = 0;
		size_t max = array.size();
		while(min < max){
			for(size_t i = min + 1; i < max; i++){
				if(cmp(array[i], array[min])){
					std::swap(array[i], array[min]);
				}
			}
			min++;
		}
	}

	template<typename T, typename Comp = cmp>
	void double_selection_sort(T& array){             //O(n^2)
		Comp cmp;                        
		size_t min = 0;
		size_t max = array.size();
		while(min < max){
			for(size_t i = min + 1; i < max; i++){
				if(cmp(array[i], array[min])){
					std::swap(array[i], array[min]);
				}
			}
			for(size_t i = max - 2; i > min; i--){
				if(cmp(array[max - 1], array[i])){
					std::swap(array[i], array[max - 1]);
				}
			}
			min++;
			max--;
		}
	}

	//-----------------------------------------------------------------------------------------------------------------
	//                                        Radix & Quick sorts for Lesta Studio
	//-----------------------------------------------------------------------------------------------------------------

	template<typename T, typename Comp = cmp>
	void qsort(size_t first, size_t last, T& array){  //O(n log n)
		Comp cmp;        
		if(first < last){
			auto mid = array[(first + last) / 2]; 
			int i = first;
			int j = last;
			while(i <= j){
				while(cmp(array[i], mid)) i++;
				while(cmp(mid, array[j])) j--;
				if(i <= j) std::swap(array[i++], array[j--]);
			}
			if(j > 0) qsort(first, j, array);
			if(i < last) qsort(i, last, array);
		}	
	}

	template<typename T>                              //O(nd)
	void radix_sort(size_t max, size_t size,  std::vector<T>& arr){      
		size_t i, j, m;
		size_t p = 1; 
		size_t index, temp;
		size_t count = 0;
		std::vector<std::vector<T>>pocket(10);
		for(size_t i = 0; i < max + 1; i++){
			m = pow(10, i + 1);
			p = pow(10, i);
			for(size_t j = 0; j < size; j++){
				temp = arr[j] % m;
				index = temp / p;
				pocket[index].push_back(arr[j]);
			}
			count = 0;
			for(size_t j = 0; j < 10; j++){
				while(!pocket[j].empty()){
					arr[count] = *(pocket[j].begin());
					pocket[j].erase(pocket[j].begin());
					count++;
				}
			}
		}
	}

	template<typename T>
	void even_odd(T& array){
		int j = array.size();
		//int half = j / 2;
		int even_count = 0;
		for(int i = 0; i < j; i++){
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
		for(int i = 0; i < j; i++){
			while(array[i] % 2 == 0){
				i++;
				even_count++;
			}
			while(array[j - 1] % 2 != 0){
				j--;
			}
			if(i < j){
				std::swap(array[i], array[j - 1]);
				even_count++;
			}
		}
		int size = array.size();
		std::cout << even_count << std::endl;
		for(int i = 0; i < size; i++){
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
			qsort(0, even_count - 1, array);
			qsort(even_count, size - 1, array);
	}

} // sorting_algorithms

#endif // __SORTING_ALGORITHMS_HPP__
