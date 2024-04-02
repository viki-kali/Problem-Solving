/*
   *            1
  * *         2 1 2
 * * *      3 2 1 2 3
* * * *   4 3 2 1 2 3 4
 * * *      3 2 1 2 3
  * *         2 1 2
   *            1

*/
#include<iostream>
using namespace std;

int main()
{
    int n=4;
    int i,j,space_count,star_count,val,flag=n-1;
    for(i=1;i<=2*n -1;i++)
    {
        space_count= i>n? i-n :n-i;

        for(j=0;j<space_count;j++)
        {
            cout<<" ";
        }

        star_count= i<=n? i :flag--;
        for(j=0;j<star_count;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=1;i<=2*n -1;i++)
    {
        space_count= i>n? i-n :n-i;

        for(j=0;j<space_count;j++)
        {
            cout<<"  ";
        }

        val = i>n ? 2*n -i :i;
        for(j=val;j>=1;j--)
        {
            cout<<j<<" ";
        }
        for(j=2;j<=val;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }

}
