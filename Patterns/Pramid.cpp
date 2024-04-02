/*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
  * * * * * * * * * * *

*/
#include<iostream>
using namespace std;

int main()
{
	int i,j,space,m;
	int n=6;
    m=2*n;
	for(i=0;i<m;i=i+2)
	{
		space=m-i;

		for(j=0;j<space;j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

}
