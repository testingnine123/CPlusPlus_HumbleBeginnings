#include<iostream>
#include "printName.h"	
#include<string>
using namespace std;


printName::printName(string nm) //constructors can have parameters as well
{
	cout<<"\nConstructor\n";
	setName(nm);
}


printName::~printName()
{
	cout<<"\nDestructor\n";
}

void printName::setName(string x)
{
	name = x;
}

string printName::getName()
{
	return name;
}

int main()
{
	string name;
	cout<<"Enter a name:";
	
	cin>>name;
	
	printName obj1(name); //the entered string will be stored in "name" private variable
	
	cout<<"Name entered was:"<<obj1.getName()<<"\n";
	
	//delete obj1;
	
	return 0;
}