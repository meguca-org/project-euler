#include <stdio.h>

int main() {
    int last_last = 0, last = 1;
    int sum = 0;

    while (last + last_last < 4000000) {
        if ((last + last_last) % 2 == 0) {
            sum += last + last_last;
        }

        last = last_last + last;
        last_last = last - last_last;
    }
    printf("%d\n", sum);
}

// 4613732