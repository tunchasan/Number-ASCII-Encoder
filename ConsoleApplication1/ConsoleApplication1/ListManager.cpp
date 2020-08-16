#include "ListManager.h"

void ListManager::addFirstElemToList(int value)
{
	// Create new node
	Node* newNode = new Node(value);

	root = newNode;

	newNode->prev = root;

	newNode->next = root;
}

void ListManager::addElemToLeft(int value, int iterationCount, Node* from)
{
	// TODO
}

void ListManager::addElemToRight(int value, Node* from)
{
	// TODO
}

Node * ListManager::getLinkedList()
{
	return root;
}

ListManager::ListManager()
{
	root = nullptr;
}
