/*
5
          1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
  5 6 7 8 9 8 7 6 5

*/
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,l,center=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            cout<<"  ";
        k=center;
        for(j=0;j<i+1;j++)
        {
            cout<<k<<" ";
            k++;
        }
        l=k-2;
        center++;
        for(j=0;j<i;j++)
        {
            cout<<l<<" ";
            l--;
        }

        cout<<endl;
    }
}
