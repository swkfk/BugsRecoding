#include <stdio.h>

// Here, we shall use `()` to enclose them,
// like: ((x) > (y) ? (x) : (y))
#define MAX(x, y) (x) > (y) ? (x) : (y)

int main() {
    int a = 2, b = 3;

    // Oops, it is an infinite loop! The explain is as follows:
    // the judge statement is `i < MAX(a, b)`
    // and because of the macro, it will be expanded as `i < (a) > (b) ? (a) : (b)`
    // Of course, the `i < (a) > (b)` will be evaluated first,
    // and the statement will return either `a` or `b`,
    // both of which will make the loop go on.
    for (int i = 0; i < MAX(a, b); ++i) {
        printf("%d\n", i);
    }

    // However, if we use brackets properly, like the comments at line 3 & 4,
    // the macro expansion is `i < ((a) > (b) ? (a) : (b))`.
    // It's right!

    return 0;
}
