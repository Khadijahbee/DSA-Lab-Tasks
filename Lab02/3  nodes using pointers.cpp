#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node n1(90);
    Node n2(30);
    Node n3(10);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    Node *temp = &n1;

    cout << "Linked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
