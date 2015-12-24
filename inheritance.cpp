#include<iostream>
using namespace std;

class Mother
{
	string name;
public:
	
	Mother(){}

	void sayHi(string name)
	{
		cout<<"Hi "<<name<<"\n";
	}
};

//all public members of the base class get inherited
//constructors, destructors, overloaded operators, and friend functions...
//...can't be inherited.
class Daughter:public Mother
{
public:
	
	Daughter(){};
};

int main()
{
	string fname;

	cout<<"Enter first name:";
	cin>>fname;

	Daughter d;
	d.sayHi(fname);

	return 0;
}