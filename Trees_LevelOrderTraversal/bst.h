#ifndef bst_h
#define bst_h

class BST
{
private:
	struct node
	{
		int data;
		node *left;
		node *right;
	}*root;

	//returns a pointer to the new node
	node *createLeaf (int item);
	
	void addLeafPrivate (node *ptr, int item);

	void printInOrderPrivate (node *ptr);

	node *searchPrivate (node *ptr, int item);

	void printInOrderAtNodePrivate (node *ptr, int nodeValue);

	int heightOfTreePrivate (node *ptr);

	void printLevelOrderPrivate (node *ptr);

public:
	BST ();
	
	//calls the private function
	void addLeaf (int item);

	//print inorder traversal of the tree
	void printInOrder ();

	//search an item
	void search (int item);

	void printInOrderAtNode (int nodeValue);

	int heightOfTree ();

	void printLevelOrder ();
};

#endif