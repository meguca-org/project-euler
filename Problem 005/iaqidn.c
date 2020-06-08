#include <stdio.h>

int main() {
    for (int i = 20; ; i += 2) {
        int flag = 1;
        for (int j = 3; j <= 20; j++)
            if (i % j != 0) {
                flag = 0;
                break;
            }
        if (flag) {
            printf("%d\n", i);
            return 0;
        }

    }
    return 0;
}