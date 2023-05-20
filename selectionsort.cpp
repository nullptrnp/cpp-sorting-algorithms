// Selection sort implementation in c++
// https://github.com/nullptrnp

#include <iostream> // cout, endl
#include <vector> // vector
#include <algorithm> // swap

using namespace std;

void selectionSort(vector<int> &arr) { 
    int n = arr.size(); // size of array
    for (int i = 0; i < n-1; i++) { // one by one move boundary of unsorted subarray
        int minIndex = i;
        for (int j = i+1; j < n; j++) { // find the minimum element in unsorted array
            if (arr[j] < arr[minIndex]) { // if the current element is smaller than the minimum element
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // swap the found minimum element with the first element
    }
}