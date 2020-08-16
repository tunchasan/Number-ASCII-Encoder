#ifndef NODE_H
#define NODE_H

struct Node{

	friend class ListManager;

private:

	Node *next;

	Node *prev;

	int value;

public:

	// Creates new Node
	Node();

	// Creates new Node with value
	Node(int);

	// Returns node' value
	int getValue();
};

#endif
