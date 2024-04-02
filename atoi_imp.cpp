#include<iostream>
using namespace std;
int hi(string str);
// 45 = '-' 49='1'
int main()
{
    string s1="120345";
    int res=hi(s1);
    cout<<res;
}

int hi(string str)
{
    int i=0,sum;
    for(i=0;i<str.length();i++)
    {
        if(i==0)
        {
            sum=str[i]-'0';
        }
        else
        {
            sum=sum*10;
            sum=sum +(str[i]-'0');
        }
    }
    return sum;
}
