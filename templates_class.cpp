#include<iostream>
using namespace std;

template <class T>
class myClass
{

private:
	T num1,num2;

public:
	//initialize values
	myClass(T a, T b):num1(a),num2(b)
	{} 

	//we'll define the below function outside the class
	T bigger();

};

template <class T>
T myClass<T>::bigger()
{
	return (num1 > num2 ? num1 : num2);
}
int main()
{
	cout<<"Enter two numbers:";
	int a,b;
	cin>>a>>b;

	//syntax as below to create objects of the template class
	myClass <int> obj1(a,b);

	cout<<"Bigger number is:"<<obj1.bigger()<<"\n";

	return 0;
}