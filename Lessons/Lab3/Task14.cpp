/*#include <iostream>
void NumbersInStage(int32_t&, int32_t&);
int32_t CountMax(int32_t);
int main()
{
	int32_t h_lim{};
	std::cout << "input high limit";
	std::cin >> h_lim;
	int32_t l_lim{};
	std::cout << "input low limit";
	std::cin >> l_lim;
	NumbersInStage(h_lim, l_lim);
}
void NumbersInStage(int32_t& h_lim, int32_t& l_lim)
{
	int32_t counter{ l_lim };
	int32_t period{};
	int32_t remain{};
	int32_t summ{};
	for (counter; counter < h_lim; ++counter)
	{
		period = counter;
		summ = 0;
		while (period) 
		{
			remain = period % 10;
			period = period / 10;
			summ += remain;
		}
		int32_t max{ CountMax(counter) };
		period = counter;
			if (static_cast<int32_t>(pow(max, 2)) == summ)
			{
				std::cout << period<<'\t';
			}
	}
}
int32_t CountMax(int32_t period) 
{
	int32_t remain{};
	int32_t max{};
	while (period)
	{
		remain = period % 10;
		period = period / 10;

		if (remain > max)
		{
			max = remain;
		}
	}
	return max;
}*/