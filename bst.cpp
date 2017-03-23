#include "bst.h"
#include <iostream>
#include <stdio.h>







using namespace std;



bst::bst()
{
	root_t = NULL;
	sizeofbst_t = 0;
}



bst::~bst()
{
	deletenode(root_t);
}





void bst::deletenode(node* Node)
{
	if(Node == NULL) return;
	deletenode(Node->left);
	deletenode(Node->right);

	delete Node;
}

unsigned long bst::size() const
{
	return sizeofbst_t;
}


node* bst::getroot() const
{
	return root_t;
}



bool bst::isEmpty() const
{
	return (root_t == NULL);
}


node* bst::createNode(int val)
{
	node* nodetoCreate = new node;
	nodetoCreate->left = NULL;
	nodetoCreate->right = NULL;
	nodetoCreate->data = val;

	sizeofbst_t = sizeofbst_t + 1;

	return nodetoCreate;
}


void bst::add(int val)
{
 	node *newNode = createNode(val);
  	add(newNode);
}


node* findPredecessorNode(node* parent, node* Node, int val)
{
	if (Node == NULL) return parent;
	node *predecessor = NULL;

  	if (val < Node->data) 
  	{
    	predecessor = findPredecessorNode(Node, Node->left, val);
  	} 
  	else 
  	{
    	predecessor = findPredecessorNode(Node, Node->right, val);
  	}
  	return predecessor;
}


void bst::add(node* newNode)
{
	if(isEmpty())
	{
		root_t = newNode;
	}

	else
	{
		int val = newNode->data;
		node* parent = findPredecessorNode(NULL, root_t, val);


		if(val< parent->data)
		{
			parent->left = newNode;
		}
		else
		{
			parent->right = newNode;
		}
	}
}



void bst::preordertraversal(node* Node) const
{
	if(Node == NULL) return;
	printf("The value is: %d\n", Node->data);
	preordertraversal(Node->left);
	preordertraversal(Node->right);
}
