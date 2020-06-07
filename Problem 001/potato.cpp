#include <vector>
#include <algorithm>
#include <execution>
#include <cstdio>

int main()
{
	std::vector<int> ii(999);
	std::iota(ii.begin(), ii.end(), 1);
	int sum = std::transform_reduce(std::execution::par, ii.cbegin(), ii.cend(), 0,
		std::plus<int>(),
		[](int i) -> int
		{
			return ((i % 3) == 0 || (i % 5 == 0)) ? i : 0;
		});

	printf("%d\n", sum);

	return 0;
}
