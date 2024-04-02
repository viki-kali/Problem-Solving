/*
Enter the Number of rows - 5
Pascal's Triangle of 5 rows.
     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int rows;
    // Getting the number of rows.
    cout << "Enter the Number of rows - ";
    cin >> rows;

    cout << "Pascal's Triangle of " << rows << " rows." << endl;

    // Main logic to print Pascal's triangle.
    for( int i = 0; i <  rows; i++)
    {
        for(int j=0;j<rows-i;j++)
            cout<<" ";
        int coefficient;
        for( int j = 0; j <= i; j++){
            // Update coefficient's value
            if( j == 0 )
                coefficient = 1;
            else 
                coefficient = coefficient * (i - j + 1) / j;

            cout << coefficient << " ";
        }

        cout << endl;
    }


    return 0;
}

