#include<stdio.h>

int main(int count, char *arg[])
{
    int i;
    printf("Argument count : %d\n",count);
    printf("Argument values :\n");
    for(i=0;i<count;i++)
    {
        printf("%s\n",arg[i]);
    }
}
/*
┌──(viki㉿viki)-[/media/…/switch/My_Home/Working/ZOHO]
└─$ ./a.out 123 qwe asdf
Argument count : 4
Argument values :
./a.out
123
qwe
asdf
 */
