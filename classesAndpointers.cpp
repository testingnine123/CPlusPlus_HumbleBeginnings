#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout<<"Hi!\n";
	}

	int sum(int a,int b)
	{
		return (a+b);
	}
};

int main()
{
	cout<<"Enter two numbers:";
	int a,b;
	cin>>a>>b;

	//create dynamic memory allocation
	//use a pointer to access the public function "sum"
	MyClass *obj1 = new MyClass();

	cout<<"Sum is:"<<obj1->sum(a,b)<<"\n";

	return 0;
}
