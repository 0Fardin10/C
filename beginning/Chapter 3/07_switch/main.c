#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
   switch(a){
   case 1 :
       printf("is  it 1?\n"); break;
       case 2 :
       printf("is  it 2?\n"); break;
       case 3 :
       printf("is  it 3?\n"); break;
       case 4 :
       printf("is  it 4?\n"); break;

       default:
        printf("nothing matched..\n");


   }
    return 0;
}
