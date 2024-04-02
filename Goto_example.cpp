//sum of N numbers
#include <stdio.h>
int main()
{
int a,n=0;
printf("\nEnter the value :");
scanf("%d",&a);
start:
n=n+a;
a--;
if(a>=0)
{
  goto start;
}
printf("\nTotal value :%d",n);
return 0;
}
