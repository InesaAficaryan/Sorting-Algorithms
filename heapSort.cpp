// heap sort min to max. 
// Heap sort is a comparison-based sorting technique based on Binary Heap data structure. We first find the maximum element and place the maximum element at the end. We repeat the same process for the remaining elements. 
// Time complexity - O(n + n*logn) 
 
#include <iostream> 
#include <vector> 
#include <algorithm> 
 
void heapSort(std::vector<int>& arr) 
{ 
 std::make_heap(arr.begin(), arr.end()); // Time complexity - O(n) 
 
 for (std::size_t i = 0; i < arr.size(); ++i) // n time 
  std::pop_heap(arr.begin(), arr.end() - i); // Time complexity - O(logn) 
}
