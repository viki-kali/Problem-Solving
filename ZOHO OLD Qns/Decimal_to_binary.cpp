/*
Input : 5
Output : 101
*/
#include<iostream>
using namespace std;

int main()
{
    int N=8;
    string res="";
    while(N>0)
    {
        res= to_string(N%2) + res;
        N=N/2;
    }
    cout<<res;
    res="acbca";
    //check the res string is palindrome or not
    cout<<endl<<res.length()/2;
    for(int i=0;i<res.length()/2;i++)
    {
        if(res[i]!=res[res.length()-1-i])
        {
            cout<<"not palindrome";
            return 0;
        }
    }
    cout<<"palindrome";
}
