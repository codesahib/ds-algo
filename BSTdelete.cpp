#include<iostream>
#include<stdlib.h>
using namespace std;

struct node* Root=NULL;


struct node
{
    int data;
    node* left=NULL;
    node* right=NULL;
};
int FindMin(node *root);
struct node* createNode()
{
    struct node* new_node;
    new_node=new node;
    return(new_node);
}

void insertNode(int x)
{
    //cout<<"In node";
    struct node *temp,*p,*t;
    temp=createNode();
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    //cout<<"temp done";

    if(Root==NULL)
    {
        Root=temp;
    }

    else
    {
        t=Root;

        while(t!=NULL)
        {
            p=t;
            if(temp->data>t->data) { t=t->right;   }
            else { t=t->left;   }
        }

        if(temp->data>p->data) { p->right=temp;   }
        else {p->left=temp;}
    }
}

void inorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    else
    {
        inorder(node->left);
        cout<<node->data<<"\n";
        inorder(node->right);
    }
}

struct node* Delete(struct node *root, int data) {
  if (root == NULL) {
     return NULL;
  }
  if (data < root->data) {  // data is in the left sub tree.
      root->left = Delete(root->left, data);
  } else if (data > root->data) { // data is in the right sub tree.
      root->right = Delete(root->right, data);
  } else {
     // case 1: no children
     if (root->left == NULL && root->right == NULL) {
        delete(root); // wipe out the memory, in C, use free function
        root = NULL;
     }
     // case 2: one child (right)
     else if (root->left == NULL) {
        struct node *temp = root; // save current node as a backup
        root = root->right;
        delete temp;
     }
     // case 3: one child (left)
     else if (root->right == NULL) {
        struct node *temp = root; // save current node as a backup
        root = root->left;
        delete temp;
     }
     // case 4: two children
     else {
        struct node *temp; // find minimal value of right sub tree
      temp->data = FindMin(root->right);  root->data = temp->data; // duplicate the node
        root->right = Delete(root->right, temp->data); // delete the duplicate node
     }
  }
  return root; // parent node can update reference
}

int FindMin(node *root) {
   if (root == NULL) {
      return INT_MAX; // or undefined.
   }
   if (root->left != NULL) {
      return FindMin(root->left); // left tree is smaller
   }
   return root->data;
}
int main()
{
    //cout<<"Start";
    insertNode(8);
    insertNode(7);
    insertNode(11);
    insertNode(5);
    insertNode(9);
    insertNode(10);
    insertNode(12);
//cout<<"Inserted";
    inorder(Root);
int data;
    cout<<"Which node to delete?";
    cin>>data;
    Delete(Root,data);

    inorder(Root);
    //cout<<"End";
}
