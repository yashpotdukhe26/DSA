#include<iostream>
using namespace std;
class node{
     node* head;
     node* next;
     node* prev;

     node(int val){
        data=val;
        next=NULL;
        prev=NULL;
     }
};
class deque{
   node* front;
   node* rear;
   deque(){
    public:
        front=NULL:
        rear=NULL;   }

    void insertatfront(){
        node* newnode= new node(int val);
        if(front!=NULL){
            front=rear=newnode;
            front=newnode;
        } else{
            rear->next=newnode;
            newnode->prev=rear;
            rear=newnode;
        }
            
    }

    void insertatrear(int val){
        node* newnode= new node(int val);
        if(rear!=NULL){
            front=rear=newnode;
        }else{
            rear->next=newnode;
            newnode->prev=rear;
            rear=newnode; 
        }
    }

    void deletionatfront(int val){
        if(front==NULL){
            cout<<"empty";
        }
        if(front->next==NULL){
            front=NULL;
        } 
        else{
            front->next->prev=NULL;
            front=front->next;
        }
}
    void deletionatrear(int val){
        if(front==NULL){
            cout<<"empty";
        }
        if(front->next==NULL){
            front=NULL;
            temp=front;
        }
        while()
    }
}
int main(){
    deque d1;
    insertatfront.d1(10);
    insertatfront.d1(20);
    insertatfront.d1(30);
    insertatrear.d1(50);
    deletionatfront.d1(10);
    deletionatrear.d1(50);



    return 0;
}