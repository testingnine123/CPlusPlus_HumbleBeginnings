//Declare two integer variables "a" and "b". Print the product of the multiplication of the "a" and "b" values to the screen using two pointers (pointing to "a" and "b").
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int *ptr_a, *ptr_b;
	ptr_a = &a;
	ptr_b = &b;
	cin>>a>>b;
	cout<<"The product is:"<<(*ptr_a * *ptr_b);
	return 0;
}