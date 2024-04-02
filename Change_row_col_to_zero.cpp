/*
1111
1111
1011
1111

After zero inserted

1011
1011
0000
1011

*/
#include<iostream>
using namespace std;

int main()
{
	int a[4][4]={{1,1,1,1},{1,1,1,1},{1,0,1,1},{1,1,1,1}};
	int b[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};

	int i,j,k,row,col;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j];

		}
		cout<<endl;
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==0)
			{
				row=i;
				col=j;
				for(k=0;k<4;k++)
				{
					b[row][k]=0;
					b[k][col]=0;
				}
			}

		}
	}
	cout<<"\nAfter zero inserted\n"<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<b[i][j];

		}
		cout<<endl;
	}
}
