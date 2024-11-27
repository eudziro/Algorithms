#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>

int partition(std::vector<int>& arr, int low, int high) {
  
    // Choose the pivot
    int pivot = arr[high];
  
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
	    std::swap(arr[i], arr[j]);
        }
    }
    
    // Move pivot after smaller elements and return its position
    std::swap(arr[i + 1], arr[high]);  
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
  
    if (low < high) {
      
        // pi is stands for partition index of pivot
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

