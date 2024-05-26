// //linkedlist is a collection of nodes of which is linear non contigenious data structure


//below is the engineering approach where we handle all the cases seperately which requires us not to explain anything to the reader(code is self-explanatory)

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

void insert(Node* &head,Node* &tail,int pos,int val,int sizeOfLL)
{
    Node* temp=head;
    Node* newNode=new Node(val);
    if(pos==0)
    {
        //insert at empty LL
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        //insert at head
        else
        {
            newNode->next=temp;
            head=newNode;
        }
    }
    //insert at middle
    else if(pos<sizeOfLL && pos>0)
    {
        while(pos!=1)
        {
            temp=temp->next;
            pos--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    //insert at tail
    else if(pos==sizeOfLL)
    {
        tail->next=newNode;
        tail=newNode;
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
    int val=55;
    int pos=5;
    cout<<"linkedlist before inserting :";
    printll(head,tail);
    cout<<"linkedlist after inserting "<<val<<" at position "<<pos<<" :";
    insert(head,tail,pos,val,5);
    printll(head,tail);
    return 0;
}