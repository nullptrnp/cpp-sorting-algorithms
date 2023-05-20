// Merge sort implementation in c++
// https://github.com/nullptrnp

#include <iostream> // cout, endl
#include <vector> // vector
#include <algorithm> // swap

using namespace std; 
 
void mergeSort(int arr[], int l, int r) { // l is left index, r is right index
    if (l < r) { 
        int m = l + (r - l) / 2; // same as (l+r)/2 but avoids overflow for larger l and r
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
        int n1 = m - l + 1; // size of left subarray
        int n2 = r - m; // size of right subarray
        int* L = new int[n1];
        int* R = new int[n2];
        for (int i = 0; i < n1; i++) { // copy data to temp arrays L[] and R[]
            L[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++) { // copy data to temp arrays L[] and R[]
            R[j] = arr[m + 1 + j];
        }
        int i = 0, j = 0, k = l; // merge the temp arrays back into arr[l..r]
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) { // copy the remaining elements of L[], if there are any
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) { // copy the remaining elements of R[], if there are any
            arr[k] = R[j];
            j++;
            k++;
        }
        // free memory
        delete[] L; 
        delete[] R; 
    }
}
