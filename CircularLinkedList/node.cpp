#include "node.h"

CircularLinkedList::CircularLinkedList ():head(NULL) {}

CircularLinkedList::node *CircularLinkedList::createNode (int key)
{
	node *newNode = new node;
	newNode->data = key;
	newNode->next = NULL;
	return newNode;
}

void CircularLinkedList::appendNodeBack (int key)
{
	node *newNode = createNode(key);

	//if tree is empty
	if (head == NULL)
	{
		head = newNode;
		newNode->next = head;
		return;
	}

	//if tree is not empty
	//traverse to the last node in the list that points to the head node
	node *temp = head;
	while (temp->next != head)
		temp = temp->next;

	//make temp point to the new node
	temp->next = newNode;

	//make the new node point to the head
	newNode->next = head;
}

void CircularLinkedList::printList ()
{
	//if tree is empty
	if (head == NULL)
	{
		std::cout << "Tree is empty!\n";
		return;
	}

	//if tree not empty
	node *temp = head;
	
	while (temp->next != head)
	{
		std::cout << temp->data<<"-->";
		temp = temp->next;

	}
	std::cout << temp->next->data << std::endl;
}