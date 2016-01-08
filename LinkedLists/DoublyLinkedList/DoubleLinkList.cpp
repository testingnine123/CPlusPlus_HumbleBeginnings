#include<iostream>
#include "DLL_Node.h"
using namespace std;

DLLNode::DLLNode():head(NULL) {}

DLLNode::~DLLNode() {}

void DLLNode::AppendAtBack(int a)
{
	//create a new node
	DLLNode *newNode = new DLLNode;
	newNode->data = a;
	newNode->next = NULL;
	newNode->prev = NULL;

	//if list is epmty
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	//traverse to the end of the list to add a new node
	DLLNode *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	//cout<<temp->data;
	temp->next = newNode;
	newNode->prev = temp;
	//front->next = newNode;
}

void DLLNode::AppendInFront(int a)
{
	DLLNode *newNode = new DLLNode;
	newNode->data = a;
	newNode->next = NULL;
	newNode->prev = NULL;

	//if list is empty
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	//if at least 1 node in list
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void DLLNode::PrintList()
{
	//check if list is empty
	if (head == NULL)
	{
		cout<<"Empty list!\n";
		return;
	}

	//print the entire list
	DLLNode *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"NULL\n";

}

void DLLNode::DisplayNodesReverse()
{
	//if list is empty
	if (head == NULL)
	{
		cout<<"Lst is empty!\n";
		return;
	}

	DLLNode *temp = head;
	//reach the end of the list
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	while (temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->prev;
	}
	cout<<"NULL\n";
}

void DLLNode::DeleteNode(int a)
{
	
	//if list is empty
	if (head == NULL)
	{
		cout<<"List is empty!\n";
		return;
	}

	//if head node to be deleted
	if (head->data == a)
	{
		DLLNode *temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
		return;
	}

	//search the node to be deleted
	DLLNode *current = head, *previous;
	while(current->data != a && current->next != NULL)
	{
		previous = current;
		current = current->next;
	}

	//if last node to be deleted
	if (current->next == NULL)
	{
		delete current;
		previous->next = NULL;
		return;
	}

	//delete node in any other position
	previous->next = current->next;
	current->next->prev = previous;
	delete current;
}

void DLLNode::RemoveDuplicates()
{
	//if list is empty
	if (head == NULL) { return; }

	DLLNode *current = head;

	while (current != NULL)
	{
		DLLNode *temp = current;
		DLLNode *duplicate;
		
		while (temp->next != NULL)
		{
			if (current->data == temp->next->data)
			{
				//delete duplicate node
				duplicate = temp->next;
				temp->next = duplicate->next;
				if(duplicate->next != NULL)
					duplicate->next->prev = temp;
				delete duplicate;
			}
			else
			{
				temp = temp->next;
			}
		}
		current = current->next;
	}
}

void DLLNode::ReverseList()
{
	//if no nodes in the list
	if (head == NULL)
	{
	 	cout<<"List is empty!\n";
	 	return;
	}

	DLLNode *previous = NULL, *nextt = NULL;
	DLLNode *current = head;

	while (current != NULL)
	{
		nextt = current->next;
		current->next = previous;
		current->prev = nextt;
	//	//nextt->next = current;
		previous = current;
		current = nextt;
	}
	//change the head node position
	head = previous;
}

int main()
{
	DLLNode list;
	list.AppendAtBack(12);
	list.AppendInFront(20);
	list.AppendInFront(20);
	list.AppendAtBack(12);
	list.AppendInFront(56);
	list.AppendAtBack(125);
	list.AppendAtBack(12);
	list.AppendAtBack(100);
	list.AppendAtBack(100);
	list.AppendAtBack(100);

	cout<<"Origina list\n";
	list.PrintList();

	list.RemoveDuplicates();
	//list.DisplayNodesReverse();

	//list.DeleteNode(125);
	//list.PrintList();
	//list.DeleteNode(56);
	//list.PrintList();
	//list.DeleteNode(20);

	cout<<"Removing duplicates\n";
	list.PrintList();

	cout<<"Printing reverse list\n";
	list.DisplayNodesReverse();

	cout<<"List is\n";
	list.PrintList();

	cout<<"Actually reversing list list\n";
	list.ReverseList();
	list.PrintList();

	cout<<"Reversing the reversed list\n";
	list.DisplayNodesReverse(); 
	
	return 0;
}