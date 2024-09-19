// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int value){
//         this->data=value;
//         this->next=NULL;
//     }
// };


Node* insertAtTail(int value, Node* &head, Node* &tail)
{
    if(head==NULL && tail==NULL)
    {
        Node *NewNode = new Node(value);
        head = NewNode;
        tail = NewNode;
    }
    else
    {
        Node *NewNode = new Node(value);
        tail->next = NewNode;
        tail = NewNode;
    }
    return head;
}


// void print(Node* head){
//     Node* temp = head;
//     //uptill temp is not equal to null print and increase
//     while(temp!=NULL){
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
//     cout << endl;
// }


// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     head = insertAtTail(100, head, tail);
//     print(head);

//     head = insertAtTail(110, head, tail);
//     print(head);

//     head = insertAtTail(210, head, tail);
//     print(head);

//     return 0;
// }