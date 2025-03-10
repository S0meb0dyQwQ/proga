/*#include <iostream>
void CheckArmstrong(int64_t&);
int32_t IsMax(int64_t);
int main() 
{
	int64_t num{};
	std::cout << "input num\n";
	std::cin >> num;
	if (num > 0) 
	{
		CheckArmstrong(num);
	}
	else {
		std::cout << "not natural\n";
	}
	return 0;
}
void CheckArmstrong(int64_t& num)
{
	int32_t remain{};
	int32_t stage{};
	double summ{};
	int64_t period{};
	for (int32_t counter{ 1 }; counter <= num; ++counter)
	{
		summ = 0;
		period = counter;
		stage = 0;
		while (period)
		{
			remain = period % 10;
			period = period / 10;
			++stage;
		}
		period = counter;
		while (period)
		{
			remain = period % 10;
			period = period / 10;
			summ += static_cast<int32_t>(pow(remain, stage));
		}
		if (summ == counter) 
		{
			period = counter;
			std::cout << period<<'\t';
		}
	}
}
*/