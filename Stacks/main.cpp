
#include <iostream>
#include "stack.cpp"

int main ()
{
	std::cout << "How many elements in stack? ";
	unsigned int numOfElem = 0;
	std::cin >> numOfElem;

	Stack firststack (numOfElem);

	firststack.push (1);
	firststack.push (2);
	firststack.push (3);
	firststack.push (4);
	firststack.push (5);

	firststack.pop ();

	firststack.push (6);


	std::cout << "The top element in the stack is "<< firststack.peek() << std::endl;
	return 0;
}