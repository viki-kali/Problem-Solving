/*
1 10 18 25 31 36 40 43 45
2 11 19 26 32 37 41 44
3 12 20 27 33 38 42
4 13 21 28 34 39
5 14 22 29 35
6 15 23 30
7 16 24
8 17
9

*/
#include <iostream>
using namespace std;

int main() {
  int n = 9;
  int temp;
  int m=n;
  // Loop through each row
  for (int i = 1; i <=n; i++)
  {
      cout<<i<<" ";
      temp=i;
      m=n;
      for (int j = 1; j <= n-i; j++)
      {
          temp=temp+m;
          cout <<temp<<" ";
          m--;
      }
    cout << endl;
  }
  return 0;
}
