#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=4,b=2,c=116,d=32;
   printf("What is  your  namber: \n",a,b,c,d);
   scanf("%d",&a,&b,&c,&d);
   if(a>b && a>c && a>d ){
    printf("Your  number  is gratter  : \n");
   }
  else if(b>a && b>c && b>d ){
    printf("Your  number  is gratter  : \n");
   }
   else if(c>b && c>a && c>d ){
    printf("Your  number  is gratter  : \n");
   }
   else if( d>b && d>c && d>a ){
    printf("Your  number  is gratter  : \n");
   }
    return 0;
}
