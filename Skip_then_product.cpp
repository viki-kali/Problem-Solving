/*
8 24 6 12 skip and product remaining
 */
#include<iostream>
using namespace std;

int main()
{
	int a[4]={3,1,4,2};
	int i,j,res=1;
	int b[4];
	
	for(i=0;i<4;i++)
	{
		res=1;
		for(j=0;j<4;j++)
		{	if(i==j)
			{
				continue;
			}
			else
			{
				res=res*a[j];
				b[i]=res;
			}
		}
	}

	for(i=0;i<4;i++)
	{
		cout<<b[i]<<" ";
	}
}
