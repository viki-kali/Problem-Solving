/*
N-(0 -9)
Kth element
N=3
K=15

3,6,9,12,[13],15,18,21,[23],24,27,30,33,36,39,42    Are included

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,k,i,val,size,count=0;
    cin>>n;
    cin>>k;
    val=n;
    size=k+((k*n)/10);
    int a[size];
    for(i=1;i<k;i++)
    {

        a[count]=n*i;
        count++;
        if(n*i<val+10 && n*(i+1)>val+10)
        {
            val=val+10;
            a[count]=val;
            count++;
        }


    }

    for(i=0;i<count;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

