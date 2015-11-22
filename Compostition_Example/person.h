#ifndef person_h
#define person_h

#include "birthday.h"
#include<string>
using namespace std;
class Person
{
	private:
		string name;
		Birthday bd;
	
	public:
		Person(string n, Birthday b);
		void printData();
};
#endif