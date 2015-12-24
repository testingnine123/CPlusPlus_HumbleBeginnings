//A function of method whose behaviour can be overridden within an inheriting...
//...class by a function with the same signature

#include<iostream>
using namespace std;

class Enemy
{
public:
	virtual void attack()
	{
		cout<<"Enemy attack!\n";
	}

	//we would also define a pure virtual function as below
	//virtual void attack() = 0;

};

class Ninja:public Enemy
{
public:
	void attack()
	{
		cout<<"Ninja attack!\n";
	}
};

class Monster:public Enemy
{
public:
	void attack()
	{
		cout<<"Monster attack!\n";
	}
};

int main()
{
	Ninja n;
	Monster m;

	Enemy *e1 = &n;
	Enemy *e2 = &m;

	//the below will print the respective attack functions of Ninja and Monster
	//n.attack();
	//m.attack();

	//the below would implement only the attack function of the Enemy class if the function wasn't virtual
	e1->attack();
	e2->attack();

	return 0;
}