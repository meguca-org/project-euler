#include <iostream>

int main() {
    int sum = 0;
    int fibonecchi[2] = {0, 1};

    while (fibonecchi[1] < 4000000) {
        if (fibonecchi[1] % 2 == 0)
            sum += fibonecchi[1];
        int prev = fibonecchi[0];
        fibonecchi[0] = fibonecchi[1];
        fibonecchi[1] = fibonecchi[0] + prev;
    }

    std::cout << sum << std::endl;
}
