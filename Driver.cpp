#include <iostream>
#include <string>
#include <stdlib.h>
#include "LinkedList.hpp"
#define LLSIZE 6
using namespace std;

int main(int argc, char** argv)
{
    Node* n1 = new Node(4);
    Node* n2 = new Node(2);
    Node* n3 = new Node(1);
    Node* n4 = new Node(6);
    Node* n5 = new Node(0);
    Node* n6 = new Node(3);

    LinkedList* ll = new LinkedList();
    ll->addEnd(n1);
    ll->addEnd(n2);
    ll->addEnd(n3);
    ll->addEnd(n4);
    ll->addEnd(n5);
    ll->addEnd(n6);
    ll->mergeSort(0,LLSIZE-1);
    ll->display();
    //float a = 3/2;
    //cout<<a<<endl;
}