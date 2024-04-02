#include <bits/stdc++.h>
using namespace std;

//remove duplicates in an array

void removeDuplicates(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		int j;
		for (j = 0; j < i; j++)
			if (arr[i] == arr[j])
				break;
		if (i == j)
			cout << arr[i] << " ";
	}
}
 void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int main()
{
	int arr[] = { 1, 9, 2, 1, 2, 3, 6, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	removeDuplicates(arr, n);
	return 0;
}

