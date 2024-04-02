/*
Minimum element in array of strings : ab
ab
*/
#include<iostream>
using namespace std;
string hi(string str[],int N);

int main()
{
    string s1[3]={"absbc","abcjgf","ab"};

    int arrayLength = sizeof(s1) / sizeof(s1[0]);
    string res=hi(s1,arrayLength);
    cout<<res;
}

string hi(string str[],int N)
{
    int min=100,i,flag,count,j;
    string mini="";
    string res="";
    for(i=0;i<N;i++)
    {
        if(str[i].length()<=min)
        {
            min=str[i].length();
            mini=str[i];
        }
    }
    cout<<"Minimum element in array of strings : "<<mini<<endl;
    for(i=0;i<mini.length();i++)
    {
        for(j=0;j<N;j++)
        {
            if(str[j][i]==mini[i])
            {
                flag=1;
            }
            else
            {
                break;
            }
        }
        if(flag==1)
            res=res+mini[i];
    }
    return res;

}
