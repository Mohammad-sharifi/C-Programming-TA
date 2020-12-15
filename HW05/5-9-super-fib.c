#include <stdio.h>

int super_fib(int n) {
    if (n == 1 || n == 2 || n == 3) {
        return 1;
    } else {
        return super_fib(n-3) + super_fib(n-2) + super_fib(n-1);
    }
}

int main() {
    
    for (int i = 1; i <= 10; i++) {
        if (i != 10) printf("%d,", super_fib(i));
        else printf("%d", super_fib(i));
    }
    
    return 0;
}