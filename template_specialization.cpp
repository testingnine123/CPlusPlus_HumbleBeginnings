#include<iostream>
using namespace std;

//generic template
template <class T>
class MyClass
{
public:
	MyClass(T a)
	{
		cout<<a<<" is not a character!\n";
	}
};

//note that no arguments in specialization class
template <>
//note that we are specifying this class for character types
class MyClass<char>
{
public:
	MyClass(char x)
	{
		cout<<x<<" is a character!\n";
	}
};

int main()
{
	//if input from user, uncomment this block
	/*int a;
	cout<<"Enter a number:";
	cin>>a;

	char ch;
	cout<<"Enter a character:";
	cin>>ch;*/

	MyClass <int> obj1(5);
	MyClass <float> obj2(5.5);

	MyClass <char> obj3('s');

	return 0;
}