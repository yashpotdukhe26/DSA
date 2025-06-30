#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class linkedlist {
public:
    node* head;

    linkedlist() {
        head = NULL;
    }

    void inserationbegin(int data) {
        node* newnode = new node(data);
        newnode->next = head;
        head = newnode;
    }

   
void printaftermiddle(){
            node* temp1=findmiddle();
            node* head2=temp1->next;
            temp1->next=NULL;
            while(head2!=NULL){
                cout<<head2->data<<" ";
                head2=head2->next;
        }

    }
    
    node getmiddle() {
        node* slow = head;
        node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

};

int main() {
    linkedlist l;
    l.inserationbegin(10);
    l.inserationbegin(20);
    l.inserationbegin(30);
    l.inserationbegin(40);
     l.inserationbegin(50);
   


    

    node* middle = l.getmiddle();
    if (middle != NULL)
        cout << "Middle Element: " << middle->data << endl;

    return 0;
}
