#include<iostream>
using namespace std;
int hi(string str1,string str2,int n);

int main()
{
    string s1="amazon";
    string s2="azonam";
    int res=hi(s1,s2,2);
    cout<<res;
}

int hi(string str1,string str2,int n)
{
    int i=0,j=0;
    char temp;
    while(n>0)
    {
        i=0;
        temp=str1[i];
        while(i<str1.length()-1)
        {
            str1[i]=str1[i+1];
            i++;
        }
        str1[i]=temp;
        n--;
    }
    cout<<str1<<endl<<str2;
    int val= str1.compare(str2);
    return val;
}
