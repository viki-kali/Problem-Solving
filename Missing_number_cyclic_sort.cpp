#include<iostream>
using namespace std;

int main()
{
    int a[]={2,6,3,0,1};
    int n= sizeof(a)/sizeof(a[0]);
    int i=0;
    while(i<n)
    {
        int correct=a[i];
        if(a[i]!=a[correct])
        {
            swap(a[i],a[correct]);
        }
        else
            i++;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    for(int i=0;i<n;i++)
    {
        if(a[i]!=i)
            cout<<"Miss: "<<i;

    }

}
