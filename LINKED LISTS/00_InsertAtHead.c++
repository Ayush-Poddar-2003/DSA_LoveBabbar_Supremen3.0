#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data=value;
        this->next=NULL;
    }
};


Node* insertAtHead(int value, Node* &head, Node* &tail) //head and tail ki orginal me change aayenge
{    
    //CASE1 : If LL is empty
    if(head==NULL && tail==NULL)
    {
        Node* NewNode = new Node(value); //node bnao aur head & tail ko usi node ke equal kro
        head = NewNode;
        tail = NewNode;
    }

    else 
    {
        Node* NewNode = new Node(value); //us value ki nyi node bnao
        NewNode->next = head;
        head = NewNode;
    }

    return head;
}


void print(Node* head)
{
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    //Initially no node
    Node *head = NULL;
    Node *tail = NULL;

    //ll is empty
    insertAtHead(10, head, tail);
    print(head); // 10->NULL

    insertAtHead(20, head, tail);
    print(head); // 20->10->NULL

    insertAtHead(30, head, tail);
    print(head); // 30->20->10->NULL

    return 0;
}