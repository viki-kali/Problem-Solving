/*
HIhELLOvIGNESH
HI
hELLO
vIGNESH
 */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i;
    string name ="hiHelloVignesh";

    for(i=0;i<name.length();i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
        else
        {
            name[i]=name[i]-32;
        }
    }
    cout <<name<< endl;

    for(i=0;i<name.length();i++)
    {

        if(name[i]>='a' && name[i]<='z')
        {
            cout<<endl;
            cout<<name[i];
        }
        else
        {
            cout<<name[i];
        }
    }
    return 0;
}
