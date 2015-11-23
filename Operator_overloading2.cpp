#include<iostream>
using namespace std;

class opLoad
{
	private:
		int feet;
		int inch;
	
	public:
		//constructor to initialize
		opLoad():feet(0),inch(0)
		{}
		
		opLoad(int a, int b)
			{
				feet = a;
				inch = b;
			}
		//display the values
		void display()
		{
			cout<<"Feet:"<<feet<<"\n"<<"Inches:"<<inch<<"\n";
		}
		//overload the minus operator
		opLoad operator- ()
		{
			feet = -feet;
			inch = -inch;
			return opLoad(feet, inch);
		}
};
int main()
{
	
	int feet, inches;
	cout<<"Enter feets and inches:";
	cin>>feet>>inches;

	opLoad obj1(feet,inches);

	//apply minus operator
	-obj1;
	
	//display the values
	obj1.display();

	return 0;
}

