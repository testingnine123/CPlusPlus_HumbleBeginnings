#include<iostream>
using namespace std;
int add(int *a, int *b)
{
	return *a + *b;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	
	cout<<"Sum of the two numbers is:"<<add(&a,&b)<<"\n";
	return 0;
}