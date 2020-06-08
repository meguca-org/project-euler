#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    long sum = 2;

    for (int i = 3; i < 2000000; i += 2) {
        if (is_prime(i))
            sum += i;
    }

    printf("%ld\n", sum);
}