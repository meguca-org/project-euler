#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 3; i < 10000; i++)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;

    printf("%d\n", sum);
}