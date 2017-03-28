#include<iostream>
#include<stdio.h>
using namespace std;
struct node* Start=NULL;
//Function declarations
struct node* createNode();
void deleteNode(int n);
void showNodes();
//Declaring Node
struct node
{
    int info;
    node* link;
};

int main()
{
    int item;
    cout<<"Enter the item to be deleted";
    cin>>item;

    deleteNode(item);
    showNodes();
}

void deleteNode(int item)
    {
     struct node* ptr;
     ptr=Start;

     if(ptr==NULL)
     {
         cout<<"List is already empty";
     }

     else
{  //Non-empty list

    struct node* head;
     head=Start;

     if(head->info==item)
        Start=head->link;

     else{
     while(ptr!=NULL)
    {
    if(ptr->link->info==item)
     {
       ptr->link=ptr->link->link;
     }
    ptr=ptr->link;
    }
     }
}
    }
