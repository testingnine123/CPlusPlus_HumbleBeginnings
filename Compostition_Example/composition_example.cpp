#include<iostream>
#include<string>
#include "birthday.h"
#include "person.h"
using namespace std;

Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y)
{
}

void Birthday::printDate()
{
	cout<<month<<"/"<<day<<"/"<<year<<"\n";
}

Person::Person(string n, Birthday b)
:name(n), bd(b)
{
} 

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
	
	Birthday obj_b(month,day,year);
	
	Person obj_p(name,obj_b);
	obj_p.printData();
	
	return 0;
}