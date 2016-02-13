#ifndef stack_h
#define stack_h

class Stack
{
public:
	//constructor
	//size of stack
	Stack (int size);

	//copy constructor - copy from other stack
	Stack (const Stack &otherStack);

	//const means this function will not modify any member variable of this class
	//check is stack is empty
	bool isEmpty () const;
	
	//check if stack is full
	bool isFull () const;

	//reset stack
	void initializeStack ();

	//return the top of the stack
	int peek ();

	//add item to stack
	void push (int item);

	//remove item from stack
	void pop ();

	//destructor
	~Stack();

private:
	//how big the stack would be
	int maxStackSize;

	//keep track of the top of the stack
	int stackTop;

	//array to store stuff
	int *list;
};
#endif