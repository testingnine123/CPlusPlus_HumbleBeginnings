//polymorphism means same function but different implementation depending on...
//...arguments, types, etc

#include<iostream>
using namespace std;

class Enemy
{
protected:
	int attackPower;
public:
	void setAttackPower(int a)
	{
		attackPower = a;
	}
};

class Ninja:public Enemy
{
public:
	void attack()
	{
		cout<<"Attack power of Ninja:"<<attackPower<<"\n";
	}
};

class Monster:public Enemy
{
public:
	void attack()
	{
		cout<<"Attack power of Monster:"<<attackPower<<"\n";
	}
};

int main()
{
	Ninja n;
	Monster m;

	//we could directly call the functions using the object as well
	//but using pointers is faster and efficient
	Enemy *e1 = &n; //or Enemy* e1 = &n
	Enemy *e2 = &m;


	//if we were to directly call the functions using the objects
	//n.setAttackPower(20);
	//m.setAttackPower(30);

	//call the attackPower function for each pointer pointing to Ninja and Monster obejcts
	e1->setAttackPower(20);
	e2->setAttackPower(30);

	n.attack();
	m.attack();

	return 0;
}