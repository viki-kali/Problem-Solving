#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted subarrays into one sorted array
void merge(vector<int>& array, int left, int mid, int right) {
    int n1 = mid - left + 1;    // Size of left subarray
    int n2 = right - mid;       // Size of right subarray
    
    // Create temporary arrays to store left and right subarrays
    vector<int> leftArray(n1);
    vector<int> rightArray(n2);
    
    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        leftArray[i] = array[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArray[i] = array[mid + 1 + i];
    }
    
    // Merge the temporary arrays back into array
    int i = 0; // Initial index of left subarray
    int j = 0; // Initial index of right subarray
    int k = left; // Initial index of merged subarray
    
    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            array[k++] = leftArray[i++];
        } else {
            array[k++] = rightArray[j++];
        }
    }
    
    // Copy the remaining elements of leftArray, if any
    while (i < n1) {
        array[k++] = leftArray[i++];
    }
    
    // Copy the remaining elements of rightArray, if any
    while (j < n2) {
        array[k++] = rightArray[j++];
    }
}

// Function to perform merge sort recursively
void mergeSort(vector<int>& array, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Calculate middle index
        
        // Recursive calls to divide the array into two halves
        mergeSort(array, left, mid); // Sort left half
        mergeSort(array, mid + 1, right); // Sort right half
        
        // Merge the sorted halves
        merge(array, left, mid, right);
    }
}

// Function to print elements of an array
void printArray(const vector<int>& array) {
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> array = {12, 11, 13, 5, 6, 7};
    cout << "Original array:" << endl;
    printArray(array);
    
    // Sort the array using merge sort
    mergeSort(array, 0, array.size() - 1);
    
    cout << "Sorted array:" << endl;
    printArray(array);
    
    return 0;
}
