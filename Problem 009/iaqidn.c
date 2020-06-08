#include <stdio.h>
#include <math.h>

int is_square(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    for (int a = 1; a < 500; a++) {
        for (int b = a; b < 500; b++) {
            int c_sq = a * a + b * b;
            if (is_square(c_sq) && a + b + sqrt(c_sq) == 1000.) {
                printf("%d\n", a * b * (int) sqrt(c_sq));
            }
        }
    }
}