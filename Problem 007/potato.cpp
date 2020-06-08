#include <vector>
#include <cstdio>

int main()
{
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

	for (int64_t i = 3; p.size() < 10001; i += 2)
	{
		is_prime(i);
	}

	printf("%lld\n", p.back());

	return 0;
}
