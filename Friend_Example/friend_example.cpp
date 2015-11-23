#include<iostream>
#include "friend_example.h"
using namespace std;

addNum::addNum(int a, int b)
{
	num1 = a;
	num2 = b;
}

int addition(addNum &obj1)
{
	return (obj1.num1 + obj1.num2);
}

int main()
{
	int n1, n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	
	addNum obj1(n1, n2);
	
	cout<<"Addition of the two numbers is:"<<addition(obj1)<<"\n";
		
	return 0;
}