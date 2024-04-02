#include<iostream>
using namespace std;
string hi(string str);

int main()
{
    string s1="acaaabggcdtsbbacdddd";    //along with the char "acbcdtsac" contineous duplicate eliminate

    string res=hi(s1);
    cout<<res;
}

string hi(string str)
{
    string word="";
    char current;
    int i=0;
    for(i=0;i<str.length();i++)
    {
        //"acaaabbbacdddd"
        //aaab
        current =str[i];
        if(current!=str[i+1])
        {
            word=word+str[i];
        }
        else
        {
            while(current==str[i+1])
            {
                i++;  //abaaac
            }
        }

    }
    return word;
}
