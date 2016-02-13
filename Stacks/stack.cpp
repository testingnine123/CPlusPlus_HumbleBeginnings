#include "stack.h"

Stack::Stack (int size)
{
	maxStackSize = size;
	initializeStack ();

	//allocate array
	//it starts from 0 not 1
	list = new int [maxStackSize - 1];
}

void Stack::initializeStack () 
{ 
	//a new stack will always have top = -1
	stackTop = -1; 
}

bool Stack::isEmpty () const 
{ 
	//check if top is -1
	return stackTop == -1; 
}

bool Stack::isFull () const	
{ 
	//check if top is full or equal to the maximum size
	return stackTop == (maxStackSize - 1); 
}

void Stack::push (int item)
{
	//if stack is empty
	if (isEmpty ())
	{
		stackTop = 0;
		list[stackTop] = item;
		return;
	}

	//if stack is not empty and not full
	if (!isFull () && !isEmpty ())
	{
		stackTop++;
		list[stackTop] = item;
		return;
	}
	
	//else, stack would be full
	std::cout << "Stack is full! Can't add more\n";
}

void Stack::pop ()
{
	//if stack is not empty
	if (!isEmpty())
		stackTop--;
}

Stack::Stack (const Stack &otherStack)
{
	maxStackSize = otherStack.maxStackSize;

	stackTop = otherStack.stackTop;

	list = new int[maxStackSize - 1];

	for (unsigned int i = 0; i < maxStackSize; i++)
		list[i] = otherStack.list[i];
}


int Stack::peek ()
{
	if (stackTop == -1)
		return -99;
	else
		return list[stackTop];
}

Stack::~Stack ()
{
	delete[] list;
}