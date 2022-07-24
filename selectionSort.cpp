// Selection sort min to max.  
// Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in 
// each iterationand places that element at the beginning of the unsorted list. 
// Time complexity - O(n2) 
 
#include <iostream> 
#include <vector> 
 
void selectionSort(std::vector<int>& arr) 
{ 
 int current = 0; 
 
 for (std::size_t i = 0; i < arr.size(); ++i) 
 { 
  current = i; 
  for (std::size_t j = i + 1; j < arr.size(); ++j) 
   if (arr[j] < arr[current]) 
    current = j; 
  std::swap(arr[current], arr[i]); 
 } 
}
