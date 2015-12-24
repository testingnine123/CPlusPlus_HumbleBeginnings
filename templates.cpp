#include<iostream>
using namespace std;

//creates a general function to add any type of data
//template 
template <class T>
T sum(T a, T b)
{
	return a + b;
}

int main()
{
	cout<<"Enter two numbers (int):";
	int x,y;
	cin>>x>>y;

	cout<<"Sum of int is:"<<sum(x,y)<<"\n";

	cout<<"Enter two numbers (float):";
	float f1,f2;
	cin>>f1>>f2;

	cout<<"Sum of float is:"<<sum(f1,f2)<<"\n";

	return 0;
}