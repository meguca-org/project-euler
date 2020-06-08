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
    int count = 1;

    for (int i = 3; ; i++) {
        if (is_prime(i)) {
            count++;
            if (count == 10001) {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    return 0;
}