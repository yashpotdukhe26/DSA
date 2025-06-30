#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

class linkedlist{
    public:
    node* head;node*tail;

    linkedlist(){
        head=tail=NULL;
    }

    void insertatend(int data){
        node* newnode=new node(data);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
         
        tail->next=newnode;
        tail=newnode;
    }
    void printlinkedlist(node* head){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";

    }

   node* reverselinkedlist(node* head,int k){
        node* curr=head;
        node* next=NULL;
        node* prev=NULL;
        int count=0;
        node* temp=head;
        int nodecount=0;
        while(temp!=NULL && nodecount<k){
            temp=temp->next;
            nodecount++;
        }

        if(nodecount<k){
            return head;

        }

        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;

        }
        if(next!=NULL){
            head->next=reverselinkedlist(next,k);
        }

        return prev;


    }




};
int main(){
    linkedlist l1;
    int size;
    cin>>size;

  
    for(int i=0;i<size;i++){
       
          int data;
          cin>>data;
        l1.insertatend(data);

    }
    int k;
    cin>>k;

    // l1.printlinkedlist(l1.head);

    node* reverse= l1.reverselinkedlist(l1.head,k);
    l1.printlinkedlist(reverse);


   








    return 0;
}