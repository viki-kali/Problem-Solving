/*
Enter char : E
A
AB
ABC
ABCD
ABCDE

*/
#include<iostream>
using namespace std;

int main()
{
	char val;
	cout<<"Enter char : ";
	cin>>val;
	
	for(int i='A';i<=val;i++)
	{
		for(int j='A';j<=i;j++)
		{
			cout<<(char)(j);
		}
		cout<<endl;
	}
}
