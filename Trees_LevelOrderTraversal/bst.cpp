#include "bst.h"
#include <iostream>
#include <queue>

BST::BST ():root(NULL) {}

BST::node *BST::createLeaf (int item)
{
	//allocate space
	node *newNode = new node;

	newNode->data = item;
	newNode->left = newNode->right = NULL;

	return newNode;
}

void BST::addLeaf (int item)
{
	addLeafPrivate (root, item);
}

void BST::addLeafPrivate (node *ptr, int item)
{
	//if tree is empty
	if (ptr == NULL)
	{	
		root = createLeaf (item);
		return;
	}

	if (item >= ptr->data)
	{
		//traverse to the right most side
		if (ptr->right != NULL)
		{	
			addLeafPrivate (ptr->right, item);
			return;
		}			
		//add the node
		ptr->right = createLeaf (item);

		return;
	}

	if (item < ptr->data)
	{
		//traverse to the left most
		if (ptr->left != NULL)
		{
			addLeafPrivate (ptr->left, item);
			return;
		}

		//add the node
		ptr->left = createLeaf (item);

		return;
	}
}

void BST::printInOrder ()
{
	printInOrderPrivate (root);
}

void BST::printInOrderPrivate (node *ptr)
{
	if (ptr == NULL)
	{
		std::cout << "Tree is empty!\n";
		return;
	}

	//traverse to the left most
	if (ptr->left != NULL)
		printInOrderPrivate (ptr->left);

	//print the node
	std::cout << ptr->data << " ";

	//traverse to the right most
	if (ptr->right != NULL)
		printInOrderPrivate (ptr->right); 
}

void BST::search (int item)
{
	searchPrivate (root, item);
}

BST::node *BST::searchPrivate (node *ptr, int item)
{
	if (ptr == NULL)
		return NULL;

	if (item == ptr->data)
		return ptr;

	if (item > ptr->data)
		//traverse down the right side
		return searchPrivate (ptr->right, item);

	if (item < ptr->data)
		//traverse down the left side
		return searchPrivate (ptr->left, item);

	//if not found
	return NULL;
}

void BST::printInOrderAtNode (int nodeValue)
{
	node *temp = searchPrivate (root, nodeValue);

	printInOrderPrivate (temp);
}

int BST::heightOfTree ()
{
	return heightOfTreePrivate (root);
}

int BST::heightOfTreePrivate (node *ptr)
{
	if (ptr == NULL)
		return 0;
	return 1 + std::max (heightOfTreePrivate (ptr->left), heightOfTreePrivate (ptr->right));
}

void BST::printLevelOrder ()
{
	printLevelOrderPrivate (root);
}

void BST::printLevelOrderPrivate (node *ptr)
{
	if (ptr == NULL)
	{
		std::cout << "Tree is empty!\n";
		return;
	}

	//create a queue
	std::queue<node *> queue;

	//add the root node in the queue
	queue.push (root);

	while (!queue.empty ())
	{
		//print the front of the queue
		node *temp = queue.front ();
		std::cout << temp->data << " ";

		//enque the left and right child in the queue
		if (temp->left != NULL)
			queue.push (temp->left);

		if (temp->right != NULL)
			queue.push (temp->right);

		//take out the front element
		queue.pop ();
	}
}