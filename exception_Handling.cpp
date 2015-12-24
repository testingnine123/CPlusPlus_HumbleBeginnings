#include<iostream>
using namespace std;

int main()
{
	int mage, sage;

	cout<<"Enter mother's age:";
	cin>>mage;

	cout<<"Enter son's age:";
	cin>>sage;

	//code block to check user entered values
	try
	{
		if (mage < sage)
		{
			//throw an int error of 99 (or any number). This defines...
			//...type of argument passed to "catch"
			throw 99;
		}
	}

	//code block to output the error to the user. x is the value thrown by "throw"
	catch(int x)
	{
		cout<<"Mother's age can't be less than son's age.\nError "<<x<<endl;
	}

	return 0;
}