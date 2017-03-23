#include "bst.h"
#include <iostream>

using namespace std;


int main()
{
	printf("Hello World This is the Binary Search Tree Implementation in C++\n");

	bst myTree;
	myTree.add(10);
	myTree.add(100);
	myTree.add(32);
	myTree.add(4);
	myTree.add(90);
	myTree.add(142352);
	myTree.add(-21342345);
	myTree.add(9845);

	myTree.preordertraversal(myTree.getroot());
}