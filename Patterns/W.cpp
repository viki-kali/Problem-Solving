#include<iostream>
using namespace std;

int main()
{
    int N=7;
    int i,j;
    int space_count=0;
    for(i=0;i<N-1;i++)
    {
        cout<<"*";
        space_count = 2*N -2*i -1;
        for(j=space_count;j>=0;j--)
            cout<<" ";
        cout<<"*"<<endl;
    }
}
