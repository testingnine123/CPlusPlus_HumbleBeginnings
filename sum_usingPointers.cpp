#include<iostream>
using namespace std;

int add(int a, int b)
{
	int *ptr_a = &a;
	int *ptr_b = &b;

	int sum = *ptr_a + *ptr_b;
	return sum;
}

int main()
{
	cout<<add(5,6)<<"\n";
}