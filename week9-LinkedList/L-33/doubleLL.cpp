#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int curData)
    {
        this->prev=NULL;
        this->next=NULL;
        this->data=curData;
    }
};

void printll(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return ;
}

void insert(Node* &head,Node* &tail,int pos,int val,int size)
{
    Node* temp=head;
    Node* newNode=new Node(val);
    if(pos==0)
    {
        //insertion at head
        newNode->next=temp;
        temp->prev=newNode;
        head=newNode;
    }
    else if(pos>=1 && pos<size)
    {
        Node* pre;
        while(pos!=0)
        {
            pre=temp;
            temp=temp->next;
            pos--;
        }
        newNode->next=temp;
        newNode->prev=pre;
        pre->next=newNode;
        temp->prev=newNode;

        // while(pos!=1)
        // {
        //     temp=temp->next;
        //     pos--;
        // }
        // newNode->next=temp->next;
        // newNode->prev=temp;
        // // temp->next=newNode;
    }
    else
        cout<<"khud se kr le :|"<<endl;
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
    n1->prev=NULL;
    n2->prev=n1;
    n3->prev=n2;
    n4->prev=n3;
    n5->prev=n4;
    Node*head=n1;
    Node*tail=n5;
    printll(head);
    int pos=3;
    insert(head,tail,pos,-1,5);
    printll(head);
}