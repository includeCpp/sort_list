#ifndef __data__structures__
#define __data__structures__

#include<algorithm>
#include<iostream>
#include<vector>

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
		int tmp, k;
		int n = array.size() - 1;
		int s = n;
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



} // data_structures

#endif

