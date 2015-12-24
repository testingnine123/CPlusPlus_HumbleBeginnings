#include<iostream>
using namespace std;

class myClass
{
	private:
		string name;
	
	public:
		myClass(string nm) //constructors can have parameters as well
		{
			 cout<<"\nConstructor\n";
			 setName(nm);
		}
		~myClass()
		{
			cout<<"\nDestructor\n";
		}
		void setName(string x)
		{
			name = x;
		}
		string getName()
		{
			return name;
		}
};
int main()
{
	string name;
	cout<<"Enter a name:";
	
	cin>>name;
	
	myClass obj1(name); //the entered string will be stored in "name" private variable
	
	cout<<"Name entered was:"<<obj1.getName()<<"\n";
	
	return 0;
}