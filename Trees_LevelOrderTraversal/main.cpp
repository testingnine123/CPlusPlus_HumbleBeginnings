#include "bst.cpp"
#include <iostream>

int main ()
{
	int array[16] = {50, 76, 21, 4, 32, 64, 15, 52, 14, 100, 83, 2, 3, 70, 87, 80};
	
	BST tree;

	for (int i = 0; i < 16; i++)
		tree.addLeaf (array[i]);

	tree.printInOrder ();
	std::cout << std::endl;

	std::cout << "Inorder traversal starting from node 4\n";
	tree.printInOrderAtNode (4);
	std::cout << std::endl;

	std::cout << "Height of the tree is " << tree.heightOfTree ();
	std::cout << std::endl;

	std::cout << "Level order traversal is\n";
	tree.printLevelOrder ();
	std::cout << std::endl;

	return 0;
}