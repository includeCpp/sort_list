#ifndef __data__structures__
#define __data__structures__

#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include<math.h>

namespace data_structures{
	template<typename T>
	void bsort(T& array){   				
		for(int i = 0; i < array.size(); ++i){                   
			for(int j = 0; j < array.size() - 1; ++j){
				if(array[j] > array[j + 1]){
					std::swap(array[j], array[j + 1]);
				}
			}
		}
	}

	template<typename T>
	void shake_sort(T& array){
		int leftMark = 0;
		int rightMark = array.size() - 1;                        
		while(leftMark <= rightMark){
			for(int i = leftMark; i <= rightMark; ++i){
				if(array[i] > array[i + 1]){
					std::swap(array[i], array[i + 1]);
				}
			}
			rightMark--;

			for(int i = rightMark; i >= leftMark; --i){
				if(array[i] < array[i - 1]){
					std::swap(array[i], array[i - 1]);
				}
			}
			leftMark++;
		}
	}

	template<typename T>
	void hair_sort(T& array){                                     
		int n = array.size() - 1;
		int s = n;
		int k;
		int tmp;
		while(n > 1){
			s /= 1.247f;
			if(s < 1) s = 1;
			k = 0;
			for(int i = 0; i + s <= n; ++i){
				if(array[i] > array[i + s]){
					tmp = array[i];
					array[i] = array[i + s];
					array[i + s] = tmp;
					k = i;
				}
			}
			if(s == 1) n = k + 1;
		}
	}

	template<typename T>
	void insertion_sort(T& array){
		for(int i = 1; i < array.size(); ++i){                     
			for(int j = i; j > 0 && array[j - 1] > array[j]; j--){
				std::swap(array[j - 1], array[j]);
			}
		}
	}

	template<typename T>
	void selection_sort(T& array){                                 
		int min = 0;
		int max = array.size();
		while(min < max){
			//std::cout << max << std::endl;
			for(int i = min + 1; i < max; i++){
				if(array[i] < array[min]){
					std::swap(array[i], array[min]);
				}
			}
			min++;
		}
	}

	template<typename T>
	void double_selection_sort(T& array){                          
		int min = 0;
		int max = array.size();
		while(min < max){
			//std::cout << max << std::endl;
			for(int i = min + 1; i < max; i++){
				if(array[i] < array[min]){
					std::swap(array[i], array[min]);
				}
			}
			for(int i = max - 2; i > min; i--){
				if(array[i] > array[max - 1]){
					std::swap(array[i], array[max - 1]);
				}
			}
			min++;
			max--;
		}
	}

	//Works as planned
	template<typename T>
	void qsort(int first, int last, T& array){                     
		if(first < last){
			auto mid = array[(first + last) / 2];
			int i = first;
			int j = last;
			while(i <= j){
				while(array[i] < mid) i++;
				while(array[j] > mid) j--;
				if(i <= j) std::swap(array[i++], array[j--]);
			}
			qsort(first, j, array);
			qsort(i, last, array);
		}	
	}

	template<typename T>
	void radix_sort(int max, int size,  std::vector<T>& arr){      
		int i, j, m;
		int p = 1; 
		int index, temp;
		int count = 0;
		std::vector<std::list<T>>pocket(10);
		for(int i = 0; i < max + 1; i++){
			m = pow(10, i + 1);
			p = pow(10, i);
			for(int j = 0; j < size; j++){
				temp = arr[j] % m;
				index = temp / p;
				pocket[index].push_back(arr[j]);
			}
			count = 0;
			for(int j = 0; j < 10; j++){
				while(!pocket[j].empty()){
					arr[count] = *(pocket[j].begin());
					pocket[j].erase(pocket[j].begin());
					count++;
				}
			}
		}
	}



} // data_structures


#endif

