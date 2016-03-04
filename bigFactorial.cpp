#include <iostream>

#define MAX_SIZE 1000

int multiply (int result[], int matrix_size, int x)
{
	int carry = 0;

	for (int i = 0; i < matrix_size; i++)
	{
		int product = result[i] * x + carry;
		result[i] = product % 10;
		carry = product / 10;
	}

	//store carry in the matrix
	while (carry > 0)
	{
		result[matrix_size] = carry;
		carry = 0;
		matrix_size++;
	}

	return matrix_size;
}

void factorial (int num)
{
	int result[MAX_SIZE];
	int matrix_size = 1;
	result[0] = 1;

	for (int i = 2; i <= num; i++)
		matrix_size = multiply (result, matrix_size, i);

	for (int i = matrix_size - 1; i >= 0; i--)
		std::cout << result[i];

	std::cout << std::endl;
}

int main ()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	std::cout << num << "! is ";
	factorial (num);

	return 0;
}