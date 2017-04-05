#include<iostream>
#include<stdio.h>
using namespace std;

struct node* Start=NULL;
struct node* createNode();
void insertNode(int item);
void showNodes();
void swapNodes();

struct node
{
    int info;
    struct node* link;
};

struct node* createNode()
{
    struct node* new_node;
    new_node=new node;
    return(new_node);
}

void insertNode(int item)
{
   // cout<<"In function";
    struct node* temp;
    struct node* ptr;
    ptr=Start;
    temp=createNode();
    temp->info=item;

    if(Start==NULL)
    {
       // cout<<"In if";
        Start=temp;
        temp->link=NULL;
    }

    else
    {
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;

    }

    ptr->link=temp;
    temp->link=NULL;
    }
}

void showNodes()
{
    struct node* ptr;
    ptr=Start;

    while(ptr!=NULL)
    {
        cout<<"\n"<<ptr->info<<"\n";
        ptr=ptr->link;
    }
}

void swapNodes()
{
  struct node* ptr;
  struct node* loc;
  struct node* first;
  int temp;

    ptr=Start;
    first=Start;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    loc=ptr;
    temp=loc->info;
    loc->info=first->info;
    first->info=temp;
}
int main()
{
    cout<<"Now inserting    \n";
    insertNode(5);
    insertNode(6);
    insertNode(7);insertNode(8);insertNode(9);insertNode(10);insertNode(11);

    cout<<"Now displaying";
    showNodes();
    swapNodes();

    cout<<"\n \n After Swap \n \n";
    showNodes();
    return 0;

}
