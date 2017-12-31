#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}

bool hasPathSum(struct node* node, int sum){
    if(node == NULL)
        return(sum == 0);
    else{
        bool ans = 0;
        int subSum = sum - node->data;
        if(subSum==0 && node->left==NULL && node->right==NULL)
            return 1;
        if(node->left)
            ans = ans|| hasPathSum(node->left, subSum);
        if(node->right)
            ans = ans|| hasPathSum(node->right, subSum);
        return 0;
    }
}




int main(){
    int sum = 21;
    struct node *root = newnode(10);
    root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);
  root->left->right = newnode(5);
  root->right->left = newnode(2);
 
  if(hasPathSum(root, sum))
    printf("There is a root-to-leaf path with sum %d", sum);
    // break;
  else
    printf("There is no root-to-leaf path with sum %d", sum);
    // break;
 
  getchar();
  return 0;
}