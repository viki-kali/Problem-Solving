// C++ program to demonstrate working of regex_search()
#include <iostream>
#include <regex>
#include<string.h>
using namespace std;

int main()
{
	// Target sequence
	string s = "I am looking for GeeksForGeeks articles";

	cout<<s<<endl;
	regex r("Geek[a-zA-Z]+");

	smatch m;
	

	regex_search(s, m, r);

	// for each loop
	for (auto x : m)
		cout << x << " ";

	return 0;
}

