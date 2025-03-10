#include <iostream>
void FindFraction( int64_t);
int main() 
{
	int64_t num{};
	std::cout << "input num\n";
	std::cin >> num;
	if (num > 0)
	{

	}
	else {
		std::cout << "not natural\n";
	}
	return 0;
}
void FindFraction(int64_t num) 
{
	double fraction{0.0};
	for (double numtor{ 1.0 }; numtor < num; ++numtor) {
		denotor = 1;
		for (int64_t denotor{ 1 }; denotor < num; ++denotor)
		{

			fraction = numtor / denotor;

		}
	}
}