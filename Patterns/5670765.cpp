/*
       0
      707
     67076
    5670765
   456707654
  34567076543
 2345670765432
123456707654321

*/
#include<iostream>
using namespace std;

int main()
{
    int n=7;
    int count1=n;
    int count2=n+1;
    int a,i,j,flag=n;
    for(i=0;i<=n;i++)
    {
        for(j=count1;j>0;j--)
        {
            cout<<" ";
        }
        count1--;
        for(j=n;j>n-i;j--)
        {
            cout<<a;
            a++;
        }
        count2--;
        a=count2;
        cout<<"0";
        for(j=n;j>n-i;j--)
        {
            cout<<flag;
            flag--;
        }
        flag=n;
        cout<<endl;
    }
}
