#include<iostream>
#include<stdlib.h>
using namespace std;
struct node* Root=NULL;

struct node{
int data;
node* left;
node* right;
};

struct node* createnode();
void insertnode();
void preorder(struct node* node);
void postorder(struct node* node);
void inorder(struct node* node);


int main(){
int n,c;
cout<<"enter the no.of nodes";
cin>>n;
for(int i=0;i<n;i++){
insertnode();
}
cout<<"which order you want";
cin>>c;

if(c==1)
preorder(Root);
if(c==2)
postorder(Root);
if(c==3)
inorder(Root);
return 0;

}
struct node* createnode(){
struct node *new_node;
new_node=new node;
return(new_node);
}
void insertnode(){
struct node* t,*temp,*p;
temp=createnode();
cout<<"enter the value";
cin>>temp->data;
temp->right=NULL;
temp->left=NULL;

if(Root==NULL){
Root=temp;
Root->left=NULL;
Root->right=NULL;
}


else{
t=Root;
while(t!=NULL)  {//just to move
        p=t;
        if(temp->data>t->data)    {t=t->right;}

        else{t=t->left;}

                }
     //p acts as previous pointer
     if(temp->data>p->data){p->right=temp;}//fill data

      else{p->left=temp;}

    }//else
}


void preorder(struct node* node){
if(node==NULL){
return;
}
cout<<node->data<<"\n";
preorder(node->left);
preorder(node->right);

}
void postorder(struct node* node){
if(node==NULL){
return;
}

postorder(node->left);
postorder(node->right);
cout<<node->data<<"\n";
}
void inorder(struct node* node){
if(node==NULL){
return;
}
inorder(node->left);
cout<<node->data<<"\n";
inorder(node->right);
}
