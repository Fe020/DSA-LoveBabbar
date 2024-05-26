#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int curData)
    {
        this->data=curData;
        this->next=NULL;
    }
};

void printll(Node* head,Node* tail)
{
    if(head == NULL || tail == NULL)
   {
       cout << "List is empty" << endl;
       return;
   }

   Node* temp=head;
   while(temp!=tail)
   {
       cout<<temp->data<<" ";
       temp=temp->next;
   }
   cout<<temp->data;
   cout<<endl;
   return;
}

// void insert(Node* &head,Node* &tail,int pos,int val,int size)
// {
//     Node* temp=head;
//     Node* newNode=new Node(val);
//     if(pos==0)
//     {
        
//         //insert at empty LL
//         if(head==NULL)
//         {
//             head=newNode;
//             tail=newNode;
//         }
//         //insert at head
//         else
//         {
//             newNode->next=temp;
//             head=newNode;
//         }
//     }
//     //insert at middle
//     else if(pos<size && pos>0)
//     {
//         while(pos!=1)
//         {
//             temp=temp->next;
//             pos--;
//         }
//         newNode->next=temp->next;
//         temp->next=newNode;
//     }
//     //insert at tail
//     else if(pos==size)
//     {
//         tail->next=newNode;
//         tail=newNode;
//     }
// }

void del(Node* &head,Node* &tail,int pos,int size)
{
    Node* temp=head;
    //del at head
    if(pos==0)
    {
        // temp=temp->next;
        // head=temp;
        
        temp=NULL;
        delete temp;
        head=head->next;
    }
    
    //del at mid
    else if(pos>0 && pos<size-1)
    {
        Node*temp=head;
        Node*prev;
        while(pos!=0)
        {
            prev=temp;
            temp=temp->next;
            pos--;
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
    }
    //del at tail
    else if(pos==size-1)
    {
        Node* temp=head;
        while(pos!=1)
        {
            temp=temp->next;
            pos--;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
}
int main()
{
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    Node* n3=new Node(30);
    Node* n4=new Node(40);
    Node* n5=new Node(50);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    Node* head=n1;
    Node* tail=n5;
    int pos=3;
    // int val=-1;
    // cout<<"linkedlist before inserting :";
    // printll(head,tail);
    // cout<<"linkedlist after inserting "<<val<<" at position "<<pos<<" :";
    // insert(head,tail,pos,val,5);
    // printll(head,tail);
    
    cout<<"linkedlist before deletion :";
    printll(head,tail);
    del(head,tail,pos,5);
    cout<<"linkedlist after deletion of node at position "<<pos<<" :";
    printll(head,tail);
    
    return 0;
}