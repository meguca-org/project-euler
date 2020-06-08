#include <stdio.h>

int is_palindrome(int n) {
    int magnitude;
    for (magnitude = 1; n >= magnitude * 10; magnitude *= 10);

    while (n > 0) {
        if (n % 10 != n / magnitude)
            return 0;
        n %= magnitude;
        n /= 10;
        magnitude /= 100;
    }

    return 1;
}

int main() {
    int max = 0;

    for (int i = 999; i > 0; i--)
        for (int j = i; j > 0; j--)
            if (is_palindrome(i * j))
                if (i * j > max)
                    max = i * j;

    printf("%d\n", max);

    return 0;
}