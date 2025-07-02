#include<iostream>
using namespace std;
class node{
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
    class completetree{
        node* bulidtree(int arr[], int n,int i){
            if(i >=n )
            return NULL;
            
                root=arr[i];
                root->left=bulidtree(2*i+1);
                root->right=bulidtree(2*i+2);
            } return root; 

        void preorder(Node* root) {
        if (root == NULL) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
                 
};
          

int main(){
    int n;
    cout<<"enter the num of nodes";
    cin>>n;

  int arr[n];
  cout<<"enter the num";
  for(int i=0; i<n; i++){
    cin>>arr[i];
}

completetree c1;
node* root=c1.bulidtree(arr,0,n);

c1.preorder(root)
cout<<" perorder traversal";


    return 0;
}