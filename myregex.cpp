#include<iostream>
#include<regex>
using namespace std;

int main()
{
	string s1="viki";
	string s2="123viki";
	string s3="viki@123";
	string s4="viG1nesh@gmail.com";
	string s5="viG1neshgmail.com";

	regex r1("(viki)");
	cout<<regex_match(s1,r1)<<endl;

	regex r2("viki");
	cout<<regex_match(s1,r1)<<endl;

	regex r3("viki.*");
	cout<<regex_match(s3,r3)<<endl;

	regex r4("viki*");
	cout<<regex_match(s3,r4)<<endl;

	regex r5("1.*");
	cout<<regex_match(s2,r5)<<endl;

	regex r6("[a-zA-Z0-9]*@gmail.com");
	cout<<regex_match(s4,r6)<<endl;

	cout<<regex_match(s5,r3)<<endl;
}


