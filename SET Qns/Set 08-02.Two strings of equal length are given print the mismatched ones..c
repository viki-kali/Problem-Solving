/*
2. Two strings of equal length are given print the mismatched ones.
I/P: a b c d e f g h i
      a b d e e g g i i
O/P: cd , de //when two char are mismatched they should be printed together.
      f , g
      h , i
 */
#include<stdio.h>
int main(void)
{
	char a[50],b[50];
	int i,j,n,st=0;
	printf("Array  size : ");
	scanf("%d",&n);
	printf("Elements to array :");
	for(i=0;i<n;i++)
		scanf(" %c",&a[i]);
	printf("Elements to array :");
	for(i=0;i<n;i++)
		scanf(" %c",&b[i]);
        printf("----Output----\n");
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			for(j=i;a[j]!=b[j] && j<n;j++)
				printf("%c",a[j]);
			printf(" , ");
			for(;i<j;i++)
				printf("%c",b[i]);
			printf("\n");
		}
	}     
	return 0;
}

