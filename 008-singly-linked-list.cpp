/*

    Singly Linked List

    Create a SLL with the use of a Class that has the following properties:
        With a private member that can contain a string.
        With methods for the following functions:
            showSLL
            addFrontSLL
            addEndSLL
            delFrontSLL
            delEndSLL
            clearSLL
        use the contsructor to create the first node.
        Start first with making the (UML) class-diagram with plantUML.

*/

#include <iostream>
using namespace std;

class Node
{
    private:
        string data;
        Node *next;
    public:
        Node(string data)
        {
            this->data = data;
            this->next = NULL;
        }
};

int main()
{
    cout << "Singly Linked List" << endl;



    return 0;
}