#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;
        Node* get(int index);

        

    public:
        LinkedList();
        void addEnd(Node* node);
        void display();
        int getCount();
        void mergeSort(int begin, int end);
        void merge(int Begin1, int Begin2, int End1, int End2);
        Node* getHead();
        Node* getTail();
};