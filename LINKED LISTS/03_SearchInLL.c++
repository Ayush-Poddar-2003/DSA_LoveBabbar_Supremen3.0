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


// void insertAtTail(int value, Node* &head, Node* &tail)
// {
//     if(head==NULL && tail==NULL)
//     {
//         Node *NewNode = new Node(value);
//         head = NewNode;
//         tail = NewNode;
//     }
//     else
//     {
//         Node *NewNode = new Node(value);
//         tail->next = NewNode;
//         tail = NewNode;
//     }
// }

// void print(Node* head){
//     Node* temp = head;
//     //uptill temp is not equal to null print and increase
//     while(temp!=NULL){
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

bool searchInLl(int target, Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data == target) 
            return true;    
        temp = temp->next;
    }
    return false;
}

// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtTail(10, head, tail);
//     insertAtTail(110, head, tail);
//     insertAtTail(210, head, tail);
//     insertAtTail(310, head, tail);
//     insertAtTail(410, head, tail);
//     print(head);

//     cout << searchInLl(310,head);
    

//     return 0;
// }