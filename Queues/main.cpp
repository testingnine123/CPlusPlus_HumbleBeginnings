
#include <iostream>
#include "queue.cpp"

int main ()
{
	std::cout << "How many elements in queue? ";
	unsigned int numOfElem = 0;
	std::cin >> numOfElem;

	Queue firstqueue (numOfElem);

	firstqueue.enqueue (1);
	firstqueue.enqueue (2);
	firstqueue.enqueue (3);
	firstqueue.enqueue (4);
	firstqueue.enqueue (5);

	firstqueue.dequeue ();

	firstqueue.enqueue (6);


	std::cout << "The first element in the queue is "<< firstqueue.peek() << std::endl;
	return 0;
}