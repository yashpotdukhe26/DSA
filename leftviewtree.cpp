#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

node* insert(node* root, int val) {
    if (root == NULL) return new node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void leftView(node* root) {
    if (root == NULL) return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            node* curr = q.front();
            q.pop();

            if (i == 0)  // print first node of each level
                cout << curr->data << " ";

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
}

node* build(int* arr, int n) {
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    node* root = build(arr, n);

    cout << "Left view of BST: ";
    leftView(root);

    delete[] arr;
    return 0;
}
