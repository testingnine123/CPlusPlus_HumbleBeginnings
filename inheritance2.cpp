#include<iostream>
using namespace std;

//base class
class Mother
{
public:
	Mother()
	{
		cout<<"Mother's constructor\n";
	}
	~Mother()
	{
		cout<<"Mother's destructor\n";
	}
};

//derived class 
class Daughter:public Mother
{
public:
	Daughter()
	{
		cout<<"Daughter's constructor\n";
	}
	~Daughter()
	{
		cout<<"Daughter's destructor\n";
	}
};

int main()
{
	
	//base class' constructor would be called first. Then the derived class' constructor
	//derived class' destructor would be called first. Then the base class' destructor
	Daughter D;

	return 0;
}