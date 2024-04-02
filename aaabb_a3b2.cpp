/*
Input : "AAAABBCDDDAAE"
Output : "A4B2CD3A2E"
*/
#include<iostream>
using namespace std;

int main()
{
    int i,j,count=1;
    string s="AAAABBCDDDAAE";
    char temp;

    for(i=0;i<s[i]!='\0';i++)
    {
        temp=s[i];
        j=i+1;
        while(temp==s[j])
        {
            count++;
            j++;
        }
        i=j-1;
        if(count==1)
        {
            cout<<temp;
        }
        else
        {
            cout<<temp<<count;
            count=1;
        }
    }
}
