#include<iostream>
using namespace std;

void division(float a, float b)
{
	float* ptr_a = &a;
	float* ptr_b = &b;
	//float c;

	try
	{
		if (*ptr_b == 0) throw 0;
		else cout<<"Result is:"<<(*ptr_a / *ptr_b)<<"\n";
	}
	
	//to handle all types of exceptions
	catch (...)
	{
		cout<<"Can't divide by 0!\n";
	}
}

int main()
{
	float a,b;
	
	//keep asking input from user
	while(true)
	{	
		cout<<"Enter numbers to divide (enter 99 to exit):";
		cin>>a>>b;

		division(a,b);

		if (a == 99)
			break;
	}

	return 0;
}