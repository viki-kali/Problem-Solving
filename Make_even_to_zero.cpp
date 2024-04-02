#include <stdio.h>
#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Variables to keep track of the index for the original array and the modified array
    int originalIndex = 0;
    int modifiedIndex = 0;

    // Iterate through the array
    while (originalIndex < n) {
        // If the current element is odd
        if (arr[originalIndex] % 2 != 0) {
            // Move the odd element to the modified array and increment both indices
            arr[modifiedIndex] = arr[originalIndex];
            modifiedIndex++;
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
        }
        // Move to the next element in the original array
        originalIndex++;
        cout<<"Ori :"<<originalIndex<<endl;
        cout<<"modified :"<<modifiedIndex<<endl;


    }

    // Fill the remaining positions in the modified array with zeros
    while (modifiedIndex < n) {
        arr[modifiedIndex] = 0;
        modifiedIndex++;
    }

    // Print the modified array
    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
