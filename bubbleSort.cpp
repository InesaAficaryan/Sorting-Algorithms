// Bubble sort algorithm is the simplest sorting algorithm that runs through the list repeatedly, compares adjacent elements, and swaps them if they are out of order. 
// The process of traversing the list is repeated until the list is sorted.
// Time complexity - O(n2).

#include <iostream> 
#include <vector> 
 
 
void bubbleSort(std::vector<int>& arr) 
{ 
 for (std::size_t i = 0; i < arr.size(); ++i) 
  for (std::size_t j = 0; j < arr.size() - 1; ++j) 
   if (arr[j] > arr[j + 1]) 
    std::swap(arr[j], arr[j + 1]); 
}
