#ifndef operator_overloading_h
#define operator_overloading_h
#include<string>
using namespace std;
class opLoad
{		
	public:
		string name;
		
		opLoad(){}
		
		//initialize values
		opLoad(string nm):name(nm)
		{
		}
		
		//add two opLoad objects			
		opLoad operator+(opLoad &obj)
		{
			
			opLoad result;
			
			//this pointer points to the address of "name" private member
			result.name = this->name + obj.name;
			
			return result;
		}
};
#endif
