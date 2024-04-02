#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool anagramcheck(string s1,string s2)
{
    if(s1.length() != s2.length())
        return false;

    int freq[26]={0};

    for(int i=0;i<s1.length();i++)
    {
        freq[s1[i]-'a']++;
    }

    for(int i=0;i<s2.length();i++)
    {
        freq[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;
}
int main()
{
    vector<vector<string>> v1;
    string input[]={"eat","aste"," ","gate","ateg",""};
    int n = sizeof(input) / sizeof(input[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(anagramcheck(input[i],input[j]))
            {
                vector<string> v2;
                v2.push_back(input[i]);
                v2.push_back(input[j]);
                v1.push_back(v2);
            }
        }
    }
    for(vector<string> data: v1)
    {
        for(string s1: data)
        {
            cout<<s1<<" ";
        }
        cout<<endl;
    }

}
