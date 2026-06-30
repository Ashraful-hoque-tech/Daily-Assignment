//Write a program to find nthFibonacci term.

#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("The %dth Fibonacci term is %d\n", n, fibonacci(n - 1));
    return 0;
}