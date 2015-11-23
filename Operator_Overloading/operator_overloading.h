#ifndef operator_overloading_h
#define operator_overloading_h
#include<string>
using namespace std;
class opLoad
{		
	public:
		string name;
		
		opLoad()
		{
		}
		
		opLoad(string nm):name(nm)
		{
		}
		
		opLoad operator+(opLoad &obj)
		{
			opLoad result;
			result.name = this->name + obj.name;
			return result;
		}
};
#endif