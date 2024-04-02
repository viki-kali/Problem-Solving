#include<iostream>
using namespace std;

int main()
{
    int N=6;
    int i,j;
    for(i=1;i<=N;i++)
    {
        int var=i;
        for(j=1;j<=N;j++)
        {
            cout<<var<<" ";
            if(var==N)
                var=0;
            var++;
        }
        cout<<endl;
    }
}
