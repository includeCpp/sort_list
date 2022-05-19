#ifndef __data__structures__
#define __data__structures__

#include<algorithm>

namespace data_structures{
	template<T>
	void bsort(T& array){   				
		for(int i = 0; i < array.size(); ++i){
			for(int j = 0; j < array.size() - 1; ++j){
				if(array[j] > array[j + 1]){
					std::swap(array[j], array[j + 1]);
				}
			}
		}
	}

} // data_structures

#endif

