#include <stdio.h>

int main() {
    int x = 25;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", (void *)&x);
    printf("%p\n", (void *)p);
    printf("%d\n", *p);

    return 0;
}