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
		return list[stackTop - 1];
}

void Stack::push (int item)
{
	//check if list is full
	if (!isFull ())
	{
		list[stackTop] = item;
		stackTop++;
	}
	else
		std::cout << "Stack is full! Can't add more\n";
}

void Stack::pop ()
{
	//check is stack is not already empty
	if (!isEmpty())
		stackTop--;
}

Stack::~Stack ()
{
	delete[] list;
}