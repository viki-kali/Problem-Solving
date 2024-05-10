#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int target=16;
    int index=1;
    while(index*n <=target)
    {
        index++;
    }
    int d1=target-((index-1)*n);
    int d2=(index)*n - target;
    if(d1>d2)
    {
        cout<<index*n;
    }
    else
    {
        cout<<(index-1)*n;
    }
}