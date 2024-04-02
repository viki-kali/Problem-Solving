#include<iostream>
using namespace std;

void fibo(int a,int b,int n);
int fibo2(int a,int b,int n);
int main()
{
    fibo2(0,1,5);

}

void fibo(int a,int b,int n)
{
    if(n==0)
    {
        return;
    }
    int c=a+b;
    cout<<c<<endl;
    fibo(b,c,n-1);
}

int fibo2(int n)
{
    if(n==1)
    {
        return n;
    }
    return fibo2(n-1)+fibo2(n-2);
}
