/*
asdfakjd
String length :8
Albhabet counting array
2 0 0 2 0 1 0 0 0 1 1 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0
s
*/
#include<iostream>
#include<string.h>
using namespace std;

//find first non repeating charecter in string
int firstNonRepeatingChar(char arr[],int n)
{
    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
    }
    //print frequency array
    cout<<"Albhabet counting array "<<endl;
    for(int i=0;i<26;i++)
    {
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]-'a']==1)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    char arr[100];
    cin>>arr;
    int n=strlen(arr);
    cout<<"String length :"<<n<<endl;
    cout<<(char)firstNonRepeatingChar(arr,n);
    return 0;
}
