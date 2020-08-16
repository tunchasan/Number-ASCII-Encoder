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
	if (from->next == root) {

		// Create new node
		Node* newNode = new Node(value);

		from->next = newNode;

		newNode->prev = from;

		newNode->next = root;

		root->prev = newNode;
	} 

	else {

		// Create new node
		Node* newNode = new Node(value);

		Node* tempNode = from->next;

		from->next = newNode;

		newNode->prev = from;

		newNode->next = tempNode;

		tempNode->prev = newNode;
	}
}

Node * ListManager::getLinkedList()
{
	return root;
}

ListManager::ListManager()
{
	root = nullptr;
}
