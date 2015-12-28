#include<iostream>

using namespace std;

struct node
{
	int x;

	//pointer to the next node, which doesn't exixts yet but will do when we build our list
	node *next; 
};

int main()
{
	//root pointer will always point to the first node
	node *root;

	//conductor pointer will be used to traverse the list
	node *conductor;

	//create a node for root
	root = new node;

	//since it is the only node, the pointer points to null
	root->next = NULL;
	//insert data into the node
	root->x = 12;

	//conductor enters the train from the engine or the first node
	conductor = root;

	//traversing the train or the list
	if (conductor != NULL)
	{
		while(conductor->next != NULL)
			conductor = conductor->next;
	}

	//add a node at the end of the list
	conductor->next = new node;
	conductor = conductor->next;
	conductor->next = NULL;
	conductor->x = 42;
	
	//print the list
	//make the conductor go back to the beginnning, where root is
	conductor = root;

	//print the list
	while(conductor != NULL)
	{
		cout<<conductor->x<<"\n";
		conductor = conductor->next;
	}

	return 0;
}