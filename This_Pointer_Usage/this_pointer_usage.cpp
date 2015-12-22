#include<iostream>
#include<string>
#include "thisPointer.h"
using namespace std;

//initialize the values using construtor
myClass::myClass(string nm):name(nm)
{
}

void myClass::printName()
{
	cout<<name<<"\n";
	
	//this pointer is used to access the address of an obejct
	cout<<this->name<<"\n";
	cout<<(*this).name<<"\n";
}

int main()
{
	string name;
	cout<<"Enter your name:";
	cin>>name;
	
	myClass obj1(name);
	
	obj1.printName();
	
	return 0;
}
