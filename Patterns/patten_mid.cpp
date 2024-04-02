#include<iostream>
using namespace std;

int main()
{
    string s= "program";
    int start=0;
    int end=s.length()-1;
    int mid = end/2;

    string second ="";
    for(int i=mid;s[i]!='\0';i++)
        second+=s[i];

    string first ="";
    for(int i=0;i<mid;i++)
        first+=s[i];

    second=second+first;

    for(int i=0;i<second.length();i++)
    {
        for(int j=0;j<=second.length()-i;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<second[j];
        cout<<endl;
    }

}
