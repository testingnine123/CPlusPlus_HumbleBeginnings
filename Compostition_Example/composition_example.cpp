#include<iostream>
#include<string>
#include "birthday.h"
#include "person.h"
using namespace std;

//initialize the values
Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y)
{}

//print class "Birthday" values
void Birthday::printDate()
{
	cout<<month<<"/"<<day<<"/"<<year<<"\n";
}

//initialize class "Person" values
Person::Person(string n, Birthday b)
:name(n), bd(b)
{} 

void Person::printData()
{
	cout<<name<<"\n";
	bd.printDate();
}

int main()
{
	string name;
	int month,day,year;
	
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter month, day and year:";
	cin>>month>>day>>year;
	
	//constructor to set values to the private members post object creation
	Birthday obj_b(month,day,year);
	
	//constructor to set values to the private members post object creation
	Person obj_p(name,obj_b);

	//call printData() function from "Person" class
	obj_p.printData();
	
	return 0;
}
