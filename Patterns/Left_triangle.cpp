/*
Enter char : E
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
ABCDCBA
ABCBA
ABA
A

 */
#include<iostream>
using namespace std;

int main()
{
	char val;
	cout<<"Enter char : ";
	cin>>val;
	int i,j,k;
	for( i='A';i<=val;i++)
	{
		for( j='A';j<=i;j++)
		{
			cout<<(char)(j);
		}	
		for( k=j-2;k>='A';k--)
		{
				cout<<(char)(k);
		}
		cout<<endl;
	}

	for(i=val-1;i>='A';i--)
	{
		for(j='A';j<=i;j++)
		{
			cout<<(char)(j);
		}
		for(k=i-1;k>='A';k--)
		{
			cout<<(char)(k);
		}
		cout<<endl;
	}
}
