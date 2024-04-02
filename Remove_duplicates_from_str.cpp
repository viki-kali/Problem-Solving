#include<iostream>
using namespace std;
string hi(string str);

int main()
{
    string s1="acaaabggcdtsbbacdddd";    //along with the char

    string res=hi(s1);
    cout<<res;
}

string hi(string str)
{
    int A[26]={0};
    string word="";
    int i=0;
    for(i=0;i<str.length();i++)
    {
        if(A[str[i]-'a']++==0)
            word=word+str[i];
    }
    return word;
}
