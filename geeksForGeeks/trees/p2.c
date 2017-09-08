
// Print level order traversal line by line | Set 1

//Given a binary tree,print level order traversal in a way
// that nodes of all levels are printed in separate lines.

#include <iostream>
#include <queue>
using namespace std;

// A Binary Tree Node
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
void printLevelOrder(node *root){
    if(root == NULL) return;

    queue<node *>q;
    q.push();
    while(1){
        int nodeCount = q.size();
        if(nodeCount == 0) break;

        while(nodeCount > 0){
            node *node = q.front();
            cout<< node -> data << " ";
            q.pop();
            if(node-> left != NULL)
                q.push(node->left);
            if(node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout<<endl;
    }
}

node* newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main(){
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);

    printLevelOrder(root);
    return 0;
}