#include <stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a = 3, b = 2;

    // Here will emit two warnings (by the lint, not by the compiler):
    // Side effects in the 1st macro argument 'x' are repeated in macro expansion
    // Side effects in the 2nd macro argument 'y' are repeated in macro expansion
    int max = MAX(a--, b--);

    printf("a: %d, b: %d, max: %d\n", a, b, max); // a: 1, b: 1, max: 2

    return 0;
}
