/*#include <iostream>
void CountSumm(int64_t);
int main()
{
	int64_t num{};
	std::cout << "input num\n";
	std::cin >> num;
	if (num > 0)
	{
		 CountSumm(num);
	}
	else {
		std::cout << "not natural\n";
	}
	return 0;
}
void CountSumm(int64_t num)
{
	int64_t summ{2};
	int64_t fib_zero{ 1 };
	int64_t fib{1};
	int64_t fib_true{ 1 };
	std::cout << fib_zero << '\t';
	while(summ<num)
	{
		std::cout << fib<<'\t';
		fib_true = fib + fib_zero;
		summ += fib_true;
		fib_zero = fib;
		fib = fib_true;
	}
	if (summ > num) {
		summ -= fib;
	}
	std::cout<<"\ntheir summ =" << summ;
}*/