#include "LinkedList.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

LinkedList::LinkedList()
{
    this->count = 0;
    this->head = NULL;
    this->tail = NULL;
}
Node* LinkedList::get(int index)
{
    Node* node2Return = this->head;
    for(int i = 0; i < index; i++)
    {
        node2Return = node2Return->getNextNode();
    }
    return node2Return;
}
void LinkedList::addEnd(Node* node)
{
    
    if(this->count == 0)
    {
        this->head = node;
        this->tail = node;
    }
    else
    {
        node->setPrevNode(this->tail);
        this->tail->setNextNode(node);
        this->tail = node;
    }
    this->count++;
}

int LinkedList::getCount()
{
    return this->count;
}

Node* LinkedList::getHead()
{
    return this->head;
}
Node* LinkedList::getTail()
{
    return this->tail;
}

void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i < this->count; i++)
    {
        std::cout<<currNode->getPayload()<<std::endl;
        currNode = currNode->getNextNode();
    }
}

void LinkedList::mergeSort(int begin, int end)
{
    
    if(begin != end)
    {        
        int begin1 = begin;  //begin1 = 0
        int end1 = (begin + end) /2; //end1 = 2
        int begin2 = end1 + 1; //begin2 = 3
        int end2 = end; //end2 = 5
        this->mergeSort(begin1,end1);
        this->mergeSort(begin2,end2);
        this->merge(begin1, begin2, end1, end2);
    }
}

void LinkedList::merge(int Begin1, int Begin2, int End1, int End2)
{
    int size = End2 - Begin1 + 1;
    LinkedList* temp = new LinkedList();
    int pos1 = Begin1;
    int pos2 = Begin2;
    for(int i = 0; i < size; i++)
    {
        if(pos1 <= End1 && pos2 <= End2)
        {
            if(this->get(pos1)->getPayload() < this->get(pos2)->getPayload())
            {
                temp->addEnd(this->get(pos1));
                pos1++;
            }
            else
            {
                temp->addEnd(this->get(pos2));
                pos2++;
            }
        }
        else if(pos1 <= End1)
        {
            temp->addEnd(this->get(pos1));
            pos1++;
        }
        else
        {
            temp->addEnd(this->get(pos2));
            pos2++;
        }
    }

    int tempPos = 0;
    for(int i = Begin1; i<= End2; i++)
    {
        this->get(i)->setPayLoad(temp->get(tempPos)->getPayload());
        tempPos = tempPos+1;
    }
    

}