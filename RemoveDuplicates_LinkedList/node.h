#ifndef node_h
#define node_h
#include<iostream>
class Node
{
private:
	int data;
	Node *next;
	Node *head;
public:
	Node();
	void AppendAtEnd(int a);
	void PrintList();
	void removeDuplicates();
	~Node();
};
#endif