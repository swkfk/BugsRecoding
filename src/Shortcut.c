#include <stdio.h>

int main() {
    int a = 2;

    // Here, `++a < 5` will not be calculated
    if (a > 0 || (++a < 5)) {
        // ...
    }

    printf("The value of `a` is %d.\n", a); // the value is `2`

    return 0;
}
