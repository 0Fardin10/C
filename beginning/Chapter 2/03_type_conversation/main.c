#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a =  9.0;
     int b =  2;        // <-- it is  correct .
     float c = a/b;
      int d = 6.7;
    printf("The  value  of a/b is %f\n",c);
      printf(" The  value  of  d is %d\n",d);

            // not correct

    //int a =  9;
    // int b =  2;
    // float c = a/b;

    return 0;
}
