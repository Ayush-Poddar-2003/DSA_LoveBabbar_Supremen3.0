// can be done either based on value or position

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

void deleteNode(int position, Node* &head, Node* &tail){
    //empty LL
    if(head==NULL && tail==NULL)
    {
        cout << "Nothing to delete";
        return;
    }

    //Single element
    else if(head==tail)
    {
        Node* temp = head; //Dynamic Allocation
        head = NULL;
        tail = NULL;
        delete temp; //Deallocation
    }

    else{
        //starting element deletion
        if(position==1)
        {
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }

        else //any other position
        {
            Node* temp = head;
            for(int i=0;i<position-2;i++){
                temp = temp->next;  //temp is set at position-1
            }
            Node* curr = temp->next; //curr is set to pos node
            temp->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
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

//     deleteNode(1,head,tail);

//     print(head);
    

//     return 0;
// }