// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int value){
//         this->data = value;
//         this->next = NULL;
//     }
// };

// void insertAtHead(int value, Node* &head, Node* &tail)
// {    
//     if(head==NULL && tail==NULL)
//     {
//         //currently LL is empty hence we are creating our first node
//         Node* NewNode = new Node(value);
//         // coz 1 hi node h to head aur tail ko usi pr lgao
//         head = NewNode;
//         tail = NewNode;
//     }
//     else //LL is not empty
//     {
//         //1 node to already hai doosri bnate
//         Node* NewNode = new Node(value);
//         // connect this with existing
//         NewNode->next=head;
//         //head update kr do
//         head=NewNode;
//     }
// }

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

// As we need to know where to insert
int getLength(Node* head)
{
    int len=0;

    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}


void insertAtPos(int pos, int value, Node* &head, Node* &tail)
{
    //Assuming given valid position
    if(pos==1) 
        insertAtHead(value, head, tail);

    int len = getLength(head);
    else if(pos == len+1) 
        insertAtTail(value, head, tail);

    else
    {
        Node* temp = head;  //temp is created and is set at position-1
        for(int i=0; i<pos-2; i++){
            temp = temp->next;
        }

        Node* NewNode = new Node(400);

        NewNode->next = temp->next;
        temp->next = NewNode;
    }
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

// int main(){

//     Node* head = NULL;
//     Node* tail = NULL;

//     insertAtTail(10, head, tail);
//     insertAtTail(110, head, tail);
//     insertAtTail(210, head, tail);
//     insertAtTail(310, head, tail);
//     insertAtTail(410, head, tail);
//     print(head);

//     insertAtPos(5,400,head,tail);
//     cout << "\nAfter Insertion\n";
//     print(head);

//     return 0;
// }