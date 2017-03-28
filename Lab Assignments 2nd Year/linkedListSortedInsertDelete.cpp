#include<iostream>
#include<stdio.h>
using namespace std;
 struct node* Start=NULL;
 int count=0;
//Function declarations
struct node* createNode();
void insertNode();
void deleteNode(int n);
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

//Display List
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
//Deleting Particular Item
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

     if(head->info==item) //deleting first element
        Start=head->link;


    else
{
            while(ptr->link!=NULL)
               {
    if(ptr->link->info==item)
     {
       ptr->link=ptr->link->link;
     }
     if(ptr->link!=NULL)
    ptr=ptr->link;

    else
        break;
               }
}
    }
    }

int main()
{
    int num1,num,item;
    //To Insert
    while(num!=0)
    {
    cout<<" To Create node press 1 \n";
    cin>>num;

    if(num==1)
       {
    insertNode();
       }

    else
        num=0;
    }
cout<<"\n \n \n Sorted List of Elements :";
showNodes();
cout<<"\n \n \n  ";

    //To Delete
  while(num1!=0)
    {

cout<<" \n \n To Delete node press 2 \n";
    cin>>num1;
    if(num1==2)
       {
           cout<<"Enter the item to be deleted";
           cin>>item;
    deleteNode(item);
       }

    else
        num1=0;
    }

cout<<"\n \n \n Sorted List of Elements :";
showNodes();
cout<<"\n \n \n  ";

return 0;
}
