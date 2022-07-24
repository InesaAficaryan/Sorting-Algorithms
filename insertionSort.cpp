// Insertion sort min to max.  
// In the insertion sort technique, we start from the second element and compare it with the first element and put it in a proper place. 
// Then we perform this process for the subsequent elements. We compare each element with all its previous elements and put or insert the element in its proper position. 
// Time complexity - O(n2) 
 
#include <iostream> 
#include <vector> 
 
void insertionSort(std::vector<int>& arr) 
{ 
 int current; 
 int j; 
 for (std::size_t i = 1; i < arr.size(); ++i) 
 { 
  current = arr[i]; 
  j = i - 1; 
  while (j >= 0 && current <= arr[j]) 
  { 
   arr[j + 1] = arr[j]; 
   --j; 
  } 
  arr[j + 1] = current; 
 } 
}
