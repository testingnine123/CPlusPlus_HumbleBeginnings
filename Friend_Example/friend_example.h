#ifndef friend_example_h
#define friend_example_h

class addNum
{
	private:
		int num1;
		int num2;
	
	public:
		addNum(int a, int b);
		void printVar();
		
	//a non member function declared as friend of a class...
	//...allows it to access the class' private members
	
	//when passing an object to a function, we need to pass...
	//...it by reference	
	friend int addition(addNum &obj1);
	
};
#endif
