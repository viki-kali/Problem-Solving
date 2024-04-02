#include <iostream>

using namespace std;
int findmin(int arr[])
{
  int min = arr[0]; // Initialize min with the first element
  for (int i = 1; i < 4; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}
int main() {
  int n = 4;
  int val;
  int a[4];
  // Loop through each row
  for (int i = 1; i <=2* n-1; i++) {
    // Loop through each element in the row
    for (int j = 1; j <= 2* n-1; j++) {
      // Print the appropriate value based on the row and column
        a[0]=i-1;a[1]=j-1;a[2]=(2*n -1)-j;a[3]=(2*n-1)-i;
        val =findmin(a);
        cout <<val;
    }
    cout << endl;
  }
  cout<<endl<<endl;
  for (int i = 1; i <=2* n-1; i++) {
    // Loop through each element in the row
    for (int j = 1; j <= 2* n-1; j++) {
      // Print the appropriate value based on the row and column
        a[0]=i-1;a[1]=j-1;a[2]=(2*n -1)-j;a[3]=(2*n-1)-i;
        val =findmin(a);
        cout <<n-val;
    }
    cout << endl;
  }

  return 0;
}
