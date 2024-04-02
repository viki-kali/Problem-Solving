#include<iostream>
using namespace std;
string hi(string str);

int main()
{
    string s1="i.am.vignesh.cse";   //cse.vignesh.am.i.
    string res=hi(s1);
    cout<<res;
}

string hi(string str)
{
    string out[10];
    string word="";
    int i=0,j=0;
    for(i=0;i<=str.length();i++)
    {
        if(str[i]!='.')
        {
            word=word+str[i];
        }
        else
        {
            out[j]=word+'.';
            word="";
            j++;
        }
    }
    out[j]=word+'.';
    word="";
    for(i=4;i>=0;i--)
        word=word+out[i];
    return word;
}
