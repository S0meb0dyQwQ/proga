#include <iostream>
#include "FunWithArrays.h"
const int32_t MAX_SIZE{ 100 };
int main()
{
	int32_t size{5};
	int32_t array[MAX_SIZE];
	InputArray(array, size);
	OutputArray(array, size);

	int32_t size_symb{ 5 };
	char array_symb[MAX_SIZE];
	InputArray(array_symb, size_symb);
	OutputArray(array_symb, size_symb);
	std::cout << "there are 7 task\n";
	BubbleSort(array, size);
	BubbleSort(array_symb, size_symb);
	std::cout << "there are 8 task\n";
	ReverseArray(array, size);
	ReverseArray(array_symb, size_symb);
	std::cout << "there are 9 task\n";
	ResetNegative(array, size);
	return 0;
}