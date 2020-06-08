#include <vector>
#include <cmath>
#include <cstdio>

int main()
{
	constexpr int64_t v = 600851475143;
	const int64_t vv = int64_t(std::floor(std::sqrt(v)));

	std::vector<int64_t> p{ 2 };
	auto is_prime = [&p](int64_t i) -> bool
	{
		for (int64_t ii : p)
		{
			if ((i % ii) == 0)
			{
				return false;
			}
		}

		p.push_back(i);
		return true;
	};

	int64_t best = 1;
	for (int64_t i = 3; i <= vv; i += 2)
	{
		if (((v % i) == 0) && is_prime(i))
		{
			best = i;
		}
	}

	printf("%lld\n", best);

	return 0;
}
