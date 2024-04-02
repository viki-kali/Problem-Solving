/*
Enter a number : 145
5! is 120
4! is 24
1! is 1
145 is Strong number

 */
#include<stdio.h>
int main()
{
	int a,b,i,n;
	int sum=0;
	int fact;
	printf("Enter a number : ");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		fact=1;
		n=a%10;
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("%d! is %d\n",n,fact);
		sum=sum +fact;
		a=a/10;
	}
	if(b==sum)
	{
		printf("%d is Strong number ",b);
	}
	else      
        {
                printf("%d is Not a Strong number ",b);
        }
	
}

