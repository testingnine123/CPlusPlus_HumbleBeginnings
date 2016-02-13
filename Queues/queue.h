#ifndef queue_h
#define queue_h

class Queue
{
public:
	//constructor
	//size of queue
	Queue (int size);

	//copy constructor - copy from other stack
	Queue (const Queue &otherQueue);

	//const means this function will not modify any member variable of this class
	//check is queue is empty
	bool isEmpty () const;
	
	//check if queue is full
	bool isFull () const;

	//reset queue
	void initializeQueue ();

	//return the first item of the queue
	int peek ();

	//add item to queue
	void enqueue (int item);

	//remove item from queue
	void dequeue ();

	//destructor
	~Queue();

private:
	//how big the queue would be
	int maxQueueSize;

	//keep track of the first item in the queue
	int front;

	//keep track of the last element in the queue
	int last;

	//array to store queue
	int *list;
};
#endif