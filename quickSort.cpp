// Quick sort min to max.  
// QuickSort is a Divideand Conquer algorithm.It picks an element as a pivot and partitions the given array around the picked pivot. 
// The pivot is first element 
 
#include <iostream> 
#include <vector> 
 
std::vector<int>::iterator partition(std::vector<int>::iterator start, std::vector<int>::iterator finish) 
{ 
 if (start >= finish) 
  return start; 
 std::vector<int>::iterator pivot = start; 
 std::vector<int>::iterator left = start + 1; 
 std::vector<int>::iterator right = finish - 1; 
 while (left <= right) 
 { 
  while (left <= right && *left <= *pivot) 
   ++left; 
  while (left <= right && *right > *pivot) 
   --right; 
  if (left <= right) 
   std::swap(*left, *right); 
 } 
 std::swap(*right, *pivot); 
 return right; 
} 
 
void quickSort(std::vector<int>::iterator start, std::vector<int>::iterator finish) 
{ 
 if (start >= finish) 
  return; 
 std::vector<int>::iterator pivot = partition(start, finish); 
 quickSort(start, pivot); 
 quickSort(pivot + 1, finish); 
}
