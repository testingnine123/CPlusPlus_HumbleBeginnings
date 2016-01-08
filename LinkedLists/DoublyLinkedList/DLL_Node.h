#ifndef DLL_Node_h
#define DLL_Node_h
#include<iostream>

class DLLNode
{
private:
	int data;
	DLLNode *next;
	DLLNode *prev;
	DLLNode *head;
public:
	DLLNode();
	void AppendAtBack(int a);
	void AppendInFront(int a);
	void PrintList();
	void DeleteNode(int a);
	void DisplayNodesReverse();
    void RemoveDuplicates();
    void ReverseList();
	~DLLNode();
};
#endif