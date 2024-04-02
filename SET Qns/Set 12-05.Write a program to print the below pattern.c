/*
 * 5.Write a program to print the below pattern

for n = 6
1	7	12	16	19	21
2	8	13	17	20
3	9	14	18
4	10	15
5	11
6
 */
#include<stdio.h>
int main(void)
{
	int n,i,j,k;
	printf("Limit : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		k=i+1;
		for(j=0;j<n-i;k+=n-j,j++)
			printf("%2d ",k);
		printf("\n");
	}
	return 0;
}
