#include<iostream>
#include<string>
#include "operator_overloading.h"
using namespace std;

int main()
{
	string n1, n2;
	
	cout<<"Enter two names:";
	cin>>n1>>n2;
	
	//initialize the values
	opLoad obj1(n1), obj2(n2);

	//store the sum of two objects in a third object	
	opLoad result = obj1 + obj2;
	
	cout<<result.name<<"\n";
	
	return 0;
}
