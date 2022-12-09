#include <stdio.h>

int increase(int tag, int *num);

int main() {
    int a = 0;
    // The order of the argument is not regulated.
    // The running results are at the end of this file.
    printf("In main(): %d %d %d\n", increase(1, &a), increase(2, &a), increase(3, &a));
    return 0;
}

int increase(int tag, int *num) {
    printf("<Tag: %d> input num: %d\n", tag, *num);
    (*num)++;
    return *num;
}

// System: Ubuntu 22.04.1 LTS (WSL)

/* ***** #1 ***** */
// Compiler: clang 12.0.1, std=c11, x86_64
/*
<Tag: 1> input num: 0
<Tag: 2> input num: 1
<Tag: 3> input num: 2
In main(): 1 2 3
*/

/* ***** #2 ***** */
// Compiler: gcc 11.3.0, std=c11, x86_64
/*
<Tag: 3> input num: 0
<Tag: 2> input num: 1
<Tag: 1> input num: 2
In main(): 3 2 1
*/
