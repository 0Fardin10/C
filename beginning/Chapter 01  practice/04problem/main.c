#include <stdio.h>
#include <stdlib.h>

int main()
{
    int P = 1000;
    int r = 5;
    int t = 2;
    float SI = (P * r * t) / 100.0;  // Use 100.0 to get float result

    printf("The value of Simple Interest is: %.2f\n", SI);
    return 0;
}
