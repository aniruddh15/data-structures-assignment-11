//Author: Aniruddh Kathiriya
//Assignment: 11

#include <iostream>
#include <cassert>
void swap(int data[], int a, int b){
    int temp=data[a];
    data[a]=data[b];
    data[b]=temp;
}
void shellsort_insertion(int data[], std::size_t size){
	int gap=size/2;
	//int temp;
	while(gap>0){
		for(std::size_t i=0;(i+gap)<size;i++){
			if(data[i]>data[i+gap]){
				int right=i+gap;
				while(((right-gap)>=0) && (data[right]<data[right-gap])){
					swap(data,right,right-gap);
					right=right-gap;		
				}	
			}
		}
		gap=gap/2;
	}
}


int main()
{
    int unSortedArray[ ] = {32,11,9,34,2,1,5,2,3,4,6,6,7,0,-3};
	for(std::size_t i=0; i<15; i++){
        std::cout<<unSortedArray[i]<<" ";
    }
	std::cout<<std::endl;
   shellsort_insertion(unSortedArray,15);
   for(std::size_t i=0; i<15; i++){
        std::cout<<unSortedArray[i]<<" ";
    }
	std::cout<<std::endl;


    return 0;
}