#include<iostream>
#include "node.h"

using namespace std;

//initialize the constructor with head node as NULL
Node::Node():head(NULL){}

void Node::AppendAtEnd(int a)
{
	Node *newNode = new Node;
	newNode->data = a;
	newNode->next = NULL;

	//if list is empty
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	//if list is not empty, traverse to the last node
	Node *temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
}

void Node::PrintList()
{
	//if list is empty
	if (head == NULL)
	{
		cout<<"List is empty!\n";
		return;
	}

	//print all nodes
	Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"NULL\n";
}

void Node::removeDuplicates()
{
	//if 0 or 1 node in the list
	if (head == NULL || head->next == NULL) 
	{ 
		cout<<"Nothing to remove!\n";
		return; 
	}
	
	//1 or more nodes in the list
	Node *temp1 = head;
	Node *duplicate;

	//compare each node with all others one by one
	while (temp1 != NULL)
	{
		//a new temp2 would be created for each run
		Node *temp2 = temp1;
		while (temp2->next != NULL)
		{
			if (temp2->next->data == temp1->data)
			{
				duplicate = temp2->next;
				temp2->next = temp2->next->next;
				delete duplicate;
			}
			else
			{
				//increment temp2 to the next node
				temp2 = temp2->next;
			}
		}
		//increment temp1 to the next node
		temp1 = temp1->next;
	}
}

Node::~Node(){}

int main()
{
	Node list;
	list.AppendAtEnd(12);
	list.AppendAtEnd(14);
	list.AppendAtEnd(16);
	list.AppendAtEnd(12);
	list.AppendAtEnd(12);
	list.AppendAtEnd(18);
	list.AppendAtEnd(14);
	list.AppendAtEnd(18);

	list.PrintList();

	list.removeDuplicates();

	list.PrintList();
	return 0;
}