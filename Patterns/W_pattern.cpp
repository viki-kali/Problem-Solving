#include<stdio.h>
int main()
{
 int i,j,n,s,m,L;
 printf("Enter the number of row in W");
 scanf("%d",&n);printf("\n");
 s=1;
 m=2*n-1;
 L=2*m-1;
 for(i=0;i<n;i++)
 {
    for(j=0;j<=L;j++)
        if(((s+i) == j)||((m-i) == j)||((m+i) == j)||((L-i) == j))
            printf("*");
        else
            printf(" ");
    printf("\n");
 }
}
