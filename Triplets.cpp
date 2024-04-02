/*
Sum of any two numbers in a array is present in the same array
*/
#include<iostream>
using namespace std;

void triplets(int arr[],int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}

int main()
{
    int a[]={1,3,4,6,10};
    triplets(a,7);
    return 0;
}
    
