/*
Input : a!b$c
Output : c!b$a
*/
#include<iostream>
#include<string>
#include<algorithm>
#include <stack>
#include <unordered_map>
using namespace std;

string specialReverse(string str)
{
    //str="a&df&*@#f"; returns "f&fd&*@#a"
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(isalpha(str[i]) && isalpha(str[j]))
        {
            swap(str[i],str[j]);
            i++;
            j--;
        }
        else if(isalpha(str[i]) && !isalpha(str[j]))
        {
            j--;
        }
        else if(!isalpha(str[i]) && isalpha(str[j]))
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    return str;
}

int main() {
    std::string str ="a!b$c";
    string s1=specialReverse(str);
    cout<<s1;
    return 0;
}
