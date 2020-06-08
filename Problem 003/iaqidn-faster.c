#include <stdio.h>
#include <math.h>

int main() {
    long target = 600851475143;

    for (int i = 2; i * i < target; i++)
        if (target % i == 0)
            target /= i;

    printf("%ld\n", target);
    return 0;
}