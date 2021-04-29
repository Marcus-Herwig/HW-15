

class Node
{
    private:
        int payload;
        Node* nextNode;
        Node* prevNode;

    public:
        Node(int num);
        int getPayload();
        Node* getNextNode();
        Node* getPrevNode();
        void setNextNode(Node* n);
        void setPrevNode(Node* n);
        void setPayLoad(int num);
};