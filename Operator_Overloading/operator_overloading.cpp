#include<iostream>
#include<string>
#include "operator_overloading.h"
using namespace std;

int main()
{
	string n1, n2;
	cout<<"Enter two names:";
	cin>>n1>>n2;
	
	opLoad obj1(n1), obj2(n2);
	
	opLoad result = obj1 + obj2;
	
	cout<<result.name<<"\n";
	
	return 0;
}