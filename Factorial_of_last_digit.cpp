/*
9
9! is equal to 362880
After eliminating last zero : 36288
Last digit : 8
*/
#include <iostream>
using namespace std;
int fact(int n)
{
	if (n <= 1)
	return 1;
	return n * fact(n - 1);
}
int main()
{
	int n;
	cin>>n;
	int factorial = fact(n);
	cout<<n<<"! is equal to "<<factorial;
	while (factorial % 10 == 0)
	{
		factorial /= 10;
	}
	cout<<endl<<"After eliminating last zero : "<<factorial;
	cout<<endl<<"Last digit : "<<factorial %10;
	return 0;
}
