// A bubble sort algorithm in c++
// https://github.com/nullptrnp

#include <iostream> // cout, endl
#include <vector> // vector
#include <algorithm> // swap

using namespace std; 

void bubbleSort(vector<int> &arr) { 
    int n = arr.size(); // size of array
    for (int i = 0; i < n-1; i++) { // one by one move boundary of unsorted subarray
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) { // last i elements are already in place
            if (arr[j] > arr[j+1]) { // if the current element is greater than the next element
                swap(arr[j], arr[j+1]); // swap the current element with the next element
                swapped = true;
            }
        }
        if (!swapped) break; // if no two elements were swapped by inner loop, then break
    }
}