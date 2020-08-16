#include "Node.h"

Node::Node()
{
	next = nullptr;

	prev = nullptr;

	value = 0;
}

Node::Node(int number)
{
	next = nullptr;

	prev = nullptr;

	value = number;
}

int Node::getValue()
{
	return value;
}
