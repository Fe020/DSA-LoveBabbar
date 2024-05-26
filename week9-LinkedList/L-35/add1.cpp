#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void printLL(ListNode* temp)
{
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(ListNode* &head)
{
    ListNode* prev=NULL;
    ListNode* next=NULL;
    ListNode* cur=head;
    while(cur)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
    printLL(head);
}
void addOne(ListNode* head)
{
    reverse(head);
    ListNode* temp=head;
    ListNode* carry=new ListNode(1);
    ListNode* prevTemp=NULL;
    while(temp)
    {
        if(carry->val==0)
            break;
        int sum=temp->val+carry->val;
        temp->val=(sum)%10;
        carry->val=(sum)/10;
        prevTemp=temp;
        temp=temp->next;
    }
    if(carry->val!=0)
    {
        prevTemp->next=carry;
        carry->next=NULL;
    }
    reverse(head);
    return ;
}
int main()
{
    ListNode* first=new ListNode(9);
    ListNode* second=new ListNode(9);
    ListNode* third=new ListNode(9);
    ListNode* fourth=new ListNode(9);
    first->next=second;
    second->next=third;
    third->next=fourth;
    ListNode* head=first;
    cout<<"actual linked list: ";
    printLL(head);
    // reverse(head);
    cout<<endl;
    addOne(head);
    cout<<"1+ actual linked list: ";
    printLL(head);
}