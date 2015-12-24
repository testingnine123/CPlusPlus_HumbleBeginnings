//templates allow us to denote generic data types

#include<iostream>
using namespace std;

template <class T, class U>

T smaller(T a, U b)
{
	return (a < b ? a : b);
}

int main()
{
	cout<<"Enter two numbers:";
	int a,b;
	cin>>a>>b;

	cout<<"Smaller number is:"<<smaller(a,b)<<"\n";
}