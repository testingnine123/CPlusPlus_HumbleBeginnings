#include "queue.h"

Queue::Queue (int size)
{
	maxQueueSize = size;
	initializeQueue ();

	//allocate array
	//it starts from 0 not 1
	list = new int [maxQueueSize - 1];
}

void Queue::initializeQueue () 
{ 
	//a new queue will always have front and last = -1
	front = last = -1; 
}

bool Queue::isEmpty () const 
{ 
	//check if front and last is -1
	return (front == -1 && last == -1); 
}

bool Queue::isFull () const	
{ 
	//check if top is full or equal to the maximum size
	return last == (maxQueueSize - 1); 
}

/*Stack::Stack (const Stack &otherStack)
{
	maxStackSize = otherStack.maxStackSize;

	stackTop = otherStack.stackTop;

	list = new int[maxStackSize - 1];

	for (unsigned int i = 0; i < maxStackSize; i++)
		list[i] = otherStack.list[i];
}*/


int Queue::peek ()
{
	//if queue is emoty
	if (front == -1 && last == -1)
		return -99;
	else
		return list[front];
}

void Queue::enqueue (int item)
{
	//if queue is empty
	if (isEmpty())
	{
		front++; last++;
		list[front] = list[last] = item;
		return;
	}

	//if queue not empty and not full
	if (!isEmpty() && !isFull ())
	{
		last++;
		list[last] = item;
		return;
	}
	
	std::cout << "Queue is full! Can't add more\n";
}

void Queue::dequeue ()
{
	//if queue is empty
	if (isEmpty())
	{
		std::cout << "Queue is empty!\n";
		return;
	}

	//increment front
	front++;
}

Queue::~Queue ()
{
	delete[] list;
}