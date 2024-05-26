//linkedlist is a collection of nodes of which is linear non contigenious data structure

#include<iostream>
using namespace std;
class Node      //behaves like a datatype
{
    public:
    int data;
    Node* next;     //ye ek pointer a of datatype Node(class)
    
    Node(int data)
    {
        this->data=data;
        this->next=NULL;    //initially ek achi practice h ki kisi pointer ko null seinitialize krdo
        cout<<"im a parameterized constructor"<<endl;
    }
    
};
void printll(Node* head)
{
    Node* temp=head;    //achi practice
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
int main()
{
    Node *n1= new Node(10);
    Node *n2= new Node(30);
    Node *n3= new Node(70);
    Node *n4= new Node(80);
    Node *n5= new Node(100);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;
    Node* head=n1;
    printll(head);
    return 0;
}