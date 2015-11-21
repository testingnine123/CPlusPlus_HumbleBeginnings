#include<iostream>
int main()
{
	//keyword used is "new"
	int *p = new int;
	
	std::cout<<"Enter a number:";
	std::cin>>*p;
	
	std::cout<<"Address of that number is:"<<p;
	std::cout<<"\nValue of that number is:"<<*p<<"\n";
	return 0;
}