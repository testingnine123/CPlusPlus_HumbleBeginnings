#include<iostream>
#include "member_initializers.h"
using namespace std;

memberInit::memberInit(int a, int b)
:regVar(a), constVar(b)
{
	cout<<"regVar = "<<regVar<<"\n"<<"constVar = "<<constVar<<"\n";
}	

int main()
{
	cout<<"Enter two number:";
	int a,b;
	cin>>a>>b;
	memberInit obj1(a,b);
	return 0;
}