#include<iostream>
using namespace std;
int hi(string str1,string str2);

int main()
{
    string s1="amazon";
    string s2="az";
    int res=hi(s1,s2);
    cout<<res;
}

int hi(string str1,string str2)
{
    int i=0,j=0;
    int temp,count=0;
    for(i=0;i<str1.length();i++)
    {
        temp=i;
        count=0;
        for(j=0;j<str2.length();j++)
        {
            if(str1[temp]==str2[j])
            {
                temp++;
                count++;
            }
        }
        if(count==str2.length())
        {
            return 1;
        }
    }
    return 0;
}
