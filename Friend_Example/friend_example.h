#ifndef friend_example_h
#define friend_example_h

class addNum
{
	private:
		int num1;
		int num2;
	
	public:
		addNum(int a, int b);
		
	friend int addition(addNum &obj1);
	
};
#endif