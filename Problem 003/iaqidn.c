#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long target = 600851475143;

    int start = (int) sqrt(target);

    for (int i = start; i > 1; i--) {
        if (target % i == 0 && is_prime(i)) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}