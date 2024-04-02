#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,5,7,9,13,16,20,36};
    int target=15;
    int start=0;
    int end= sizeof(a)/sizeof(a[0]) -1;
    int mid;
    while(start<=end)
    {
        mid= (start + end)/2;
        cout<<"start : "<<start<<" mid : "<<mid<<" end : "<<end<<endl;
        cout<<"start value: "<<a[start]<<" mid value: "<<a[mid]<<" end value: "<<a[end]<<endl;
        if(a[mid]==target)
        {
            cout<<"Element found";
            break;
        }
        else if(a[mid]<target)
        {
            start=mid+1;
            if(a[start]>target)
                cout<<a[start]<<endl;
        }
        else
        {
            end=mid-1;
        }
    }

}
