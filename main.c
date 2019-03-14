#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

#include "demo/fibonacci.c"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage\n");
        printf("  %s number\n", argv[0]);
        return 0;
    }
    char *end;
    long n = strtol(argv[1], &end, 10);
    printf("%ld\n", fib(n));
    return 0;
}