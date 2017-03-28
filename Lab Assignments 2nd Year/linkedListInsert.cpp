#include<iostream>
#include<stdio.h>
using namespace std;
 struct node* Start=NULL;
 int count=0;
//Function declarations
struct node* createNode();
void insertNode();
void deleteNode();
void showNodes();
//Declaring Node
struct node
{
    int info;
    node* link;
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
        temp->link=Start;
        Start=temp;
        //temp->link=NULL;
    }

    else
    {
         struct node* ptr;
         ptr=Start;
        while(ptr->link!=NULL && (ptr->link->info)<(temp->info))
        {
             ptr=ptr->link;
         }
    temp->link=ptr->link;
    ptr->link=temp;

    }
}



void showNodes()
{
   struct node* ptr;
   ptr=Start;
   while(ptr!=NULL)
   {
       cout<<"  "<<ptr->info;
       ptr=ptr->link;
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
