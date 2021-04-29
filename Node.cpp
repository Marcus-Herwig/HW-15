#include "Node.hpp"
#include <stdlib.h>

Node::Node(int num)
{
    this->payload = num;
    this->prevNode = NULL;
    this->nextNode = NULL;
}

int Node::getPayload()
{
    return this->payload;
}

void Node::setPayLoad(int num)
{
    this->payload = num;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

Node* Node::getPrevNode()
{
    return this->prevNode;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

void Node::setPrevNode(Node* n)
{
    this->prevNode = n;
}