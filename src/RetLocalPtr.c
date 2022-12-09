#include <stdio.h>

char *read_a_string(void);

int main() {
    char *str = read_a_string();
    printf("%s\n", str);
    return 0;
}

char *read_a_string(void) {
    char ret[512];
    scanf("%s", ret);

    // Here will emit a warning:
    // Address of stack memory associated with local variable 'ret' returned
    return ret;
}
