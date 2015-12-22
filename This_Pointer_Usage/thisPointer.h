#ifndef thisPointer_h
#define thisPointer_h

#include<string>
using namespace std;
class myClass
{
	private:
		string name;
	
	public:
		myClass(string name);
		void printName();
};
#endif