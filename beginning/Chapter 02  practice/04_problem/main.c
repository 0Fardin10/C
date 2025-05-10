#include <stdio.h>

int main() {
    // Given values
    int x = 2, y = 3, z = 3, k = 1;

    // Expression evaluation step-by-step:
    // 1. 3*x → 3*2 = 6
    // 2. 6/y → 6/3 = 2 (integer division)
    // 3. 2-z → 2-3 = -1
    // 4. -1+k → -1+1 = 0
    float e = 3*x/y - z + k;  // Final result: 0 (stored as 0.000000 in float)

    printf("The value of e is %f", e);  // Output: 0.000000
        return 0;
}
