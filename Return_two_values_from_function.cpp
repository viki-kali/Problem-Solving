#include<iostream>
using namespace std;

//create a function it returns a pair of two numbers

pair<int ,string> getPair()
{
    int x;
    string y;
    cin>>x>>y;
    return make_pair(x,y);
}


int main()
{
    pair<int ,string> p=getPair();
    cout<<p.first<<" "<<p.second;
    return 0;
}