#include <vector>
#include <algorithm>
#include <execution>
#include <cstdio>

int main()
{
	std::vector<int> ii(100);
	std::iota(ii.begin(), ii.end(), 1);

	const int sum = std::reduce(std::execution::par, ii.cbegin(), ii.cend(), 0);
	const int sum_of_squares = std::transform_reduce(std::execution::par, ii.cbegin(), ii.cend(), 0, std::plus<>(), [](int i) -> int
		{
			return i * i;
		});

	printf("%d\n", (sum * sum) - sum_of_squares);

	return 0;
}
