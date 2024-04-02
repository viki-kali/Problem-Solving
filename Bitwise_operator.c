#include<stdio.h>

int main()
{
    int a=5,b=7;
    int c=6,d=13;
    int s=15;
    printf("And : %d\n",a&b);   //101 & 111  = 101  (5)
    printf("OR : %d\n",a|b);    //101 & 111  = 111  (7)
    printf("NOT : %d\n",~a);     //5+1       = 6     (-6)

    printf("And : %d\n",c&d);   //110 & 1101 = 0100(4)
    printf("XOR : %d\n",c^d);   //110 ^ 1101 = 1011(11) xor same=0  diff=1

    printf("Rshift : %d\n",s>>2);  //  00001111   (15)
                                 //00000011     (3)

    printf("Lshift : %d",s<<2);    //  00001111   (15)
                                   //    00111100 (60)

/*
 * ┌──(viki㉿viki)-[/media/…/switch/My_Home/Working/ZOHO]
└─$ gcc bit.c

┌──(viki㉿viki)-[/media/…/switch/My_Home/Working/ZOHO]
└─$ ./a.out
And : 5
OR : 7
NOT : -6
And : 4
XOR : 11
Rshift : 3
Lshift : 60
*/

}
