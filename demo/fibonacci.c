//
// Created by guyis on 2019/3/14.
//

long fib(long n) {
    if (n <= 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
