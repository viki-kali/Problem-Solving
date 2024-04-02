/*
    input= { 1, 4, 2, 3, 45, 6, 10, 8};
    sum = 5;
    pairs (1,4), (2,3)
*/
#include<iostream>
using namespace std;

// Function to print pairs with given sum
void pairSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum)
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}

int main()
{
    int arr[] = { 1, 4, 2, 3, 45, 6, 10, 8};
    int sum = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    pairSum(arr, n, sum);
}
