#include <stdio.h>

int main() {
    int first_100_sum = 100 * 101 / 2;
    int first_100_sum_squared = first_100_sum * first_100_sum;

    int first_100_squares_sum = 0;

    for (int i = 1; i <= 100; i++)
        first_100_squares_sum += i * i;

    printf("%d\n", first_100_sum_squared - first_100_squares_sum);
    return 0;
}