#include<iostream>
#include<stdio.h>
using namespace std;
 struct node* Start=NULL;
 int count=0;
//Function declarations
struct node* createNode();
void insertNode();
void showNodes();
//Declaring Node
struct node
{
    int info;
    node* next_link;
    node* prev_link;

};

//Creating Node
struct node* createNode()
{
struct node* first_node;
first_node=new node;
return(first_node);
};
//Inserting Node in List
void insertNode()
{

    struct node* temp;
    temp=createNode();
    cout<<"Enter the value \n";
    cin>>temp->info;

    if(Start==NULL || Start->info>temp->info )
    {
        temp->next_link=Start;
        Start=temp;
        temp->prev_link=NULL;

    }

    else
    {
         struct node* ptr;
         ptr=Start;
        while(ptr->next_link!=NULL && (ptr->next_link->info)<(temp->info))
        {
             ptr=ptr->next_link;
         }
    temp->next_link=ptr->next_link;
    temp->prev_link=ptr;
    ptr->next_link=temp;


    }
}

//Displaying Nodes
void showNodes()
{
   struct node* ptr;
   ptr=Start;
   while(ptr!=NULL)
   {
       cout<<"  "<<ptr->info;
       ptr=ptr->next_link;
       count++;
   }

}

int main()
{
    int num;
    while(num!=0)
    {
    cout<<" \n \n To Create node press 1 \n";
    cin>>num;

    if(num==1)
       {
    insertNode();
       }

    else
        num=0;
    }

    cout<<"\n \n \n Sorted List of "<<count<<" Elements :";
showNodes();
cout<<"\n \n \n  ";

    return 0;
}
