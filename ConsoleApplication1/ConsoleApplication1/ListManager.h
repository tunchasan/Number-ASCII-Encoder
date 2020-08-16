#ifndef LISTMANAGER_H
#define LISTMANAGER_H

#include <string>
#include <iostream>

#include "Node.h"

using namespace std;

struct ListManager {

private:

	Node* root;

public:

	// Adds new elem. to Linked List
	void addFirstElemToList(int);

	// Adds new elem. to left side of Linked List
	void addElemToLeft(int, int, Node*);

	// Adds new elem. to right side of Linked List
	void addElemToRight(int, Node*);

	// Returns LinkedList' root
	Node* getLinkedList();

	// Constructor
	ListManager();

	// Frees the allocated memory field
	void dellactionOnList();
};

#endif
