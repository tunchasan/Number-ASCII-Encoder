#include "ListManager.h"

void ListManager::addFirstElemToList(int value)
{
	// Create new node
	Node *newNode = new Node(value);

	root = newNode;

	newNode->prev = root;

	newNode->next = root;
}

void ListManager::addElemToLeft(int value, int iterationCount, Node* from)
{
	int counter = 0;

	Node* travelar = from;

	while (counter != iterationCount) {

		if (travelar == root) {

			// Create new node
			Node* newNode = new Node(value);

			Node* tempNode = root;

			newNode->prev = tempNode->prev;

			tempNode->prev->next = newNode;

			newNode->next = tempNode;

			tempNode->prev = newNode;

			root = newNode;

			return;
		}

		travelar = travelar->prev;

		counter++;
	}

	// Create new node
	Node* newNode = new Node(value);

	Node* tempNode = travelar->next;

	travelar->next = newNode;

	newNode->prev = travelar;

	newNode->next = tempNode;

	tempNode->prev = newNode;
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

// Memory deallaction handler
void ListManager::dellactionOnList()
{
	// Deallacote the linked list' elements
	Node* temp = root;

	while (temp != root) {

		Node* temp2 = temp->next;

		delete temp;

		temp = temp2;
	}

	delete temp;
}
