// An insertion sorting algorithm in c++
// https://github.com/nullptrnp

#include <iostream> // cout, endl
#include <vector> // vector
#include <algorithm> // swap 

using namespace std; 

void insertionSort(vector<int> &arr) { // insertion sort algorithm
    int n = arr.size();
    for (int i = 1; i < n; i++) { // one by one move boundary of unsorted subarray
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) { // move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; // insert key into the proper position
    } 
}