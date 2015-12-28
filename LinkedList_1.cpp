#include<iostream>
using namespace std;

class Node
{
private:
	int data;
	Node *next;
	Node *head;

public:
	Node():head(NULL){}

	void AppendAtEnd(int a)
	{

		Node *newNode = new Node;
		newNode->data = a;
		newNode->next = NULL;

		//if list is empty
		if (head == NULL)
		{
			head = newNode;
			//head->next = NULL;
			return;
		}

		//if list is not empty, iterate to the end of the list
		Node *temp = head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		
		//add the new node to the list
		temp->next = newNode;
		//temp->next = NULL;
	}

	void Print()
	{
		Node *temp = head;

		//if list is empty
		if (temp == NULL)
		{
			cout<<"List empty!\n";
			return;
		}
		
		//if list is not empty
		while (temp != NULL)
		{
			cout<<temp->data<<"-->";
			temp = temp->next;
		}
		cout<<"NULL\n";	
	}

	void Delete(int a)
	{
		if (head == NULL)
		{
			cout<<"Nothing to delete!\n";
			return;
		}

		//if head node to be deleted
		if (head->data == a)
		{
			Node *temp = head;
			head = head->next;
			delete temp;
			return;
		}

		//iterate to the node to be deleted
		Node *prev = NULL, *nxt = NULL, *cur = head;
		while (cur != NULL && cur->data != a)
		{
			prev = cur;
			cur = cur->next;
			//if last node to be deleted
			if (cur->next == NULL && cur->data == a)
			{
				delete cur;
				prev->next = NULL;
				return;
			}

			//node not found in the list
			if (cur->data != a)
			{
				cout<<"Node not in the list!\n";
				return;
			}

			nxt = cur->next;
			delete cur;
			prev->next = nxt;
		}
	}
};

int main()
{
	Node list;
	list.AppendAtEnd(12);
	list.AppendAtEnd(20);
	//list.AppendAtEnd(30);
	list.AppendAtEnd(40);
	list.Print();
	list.Delete(12);
	//list.Delete(30);
	list.Delete(400);
	//list.Delete(20);
	list.Print();

	return 0;
}