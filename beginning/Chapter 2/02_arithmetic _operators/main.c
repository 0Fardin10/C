#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int b = 3;
    int  c  = a+b;

     printf("the value  of  a is %d the  value of  b %d and  sum is  %d \n",a , b , c );
    // Modulus   operator  is  used to   get the  remainder
printf("The  remainder  when a  is  divided by b  is  : %d\n",a%b);

// This does  not  work for  exponentiation  in C
//int  d = a^b;
    return 0;
}
