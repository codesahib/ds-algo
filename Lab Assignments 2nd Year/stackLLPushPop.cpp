#include<iostream>
#include<stdio.h>
using namespace std;
void pushNode(int cap,int item);
struct Node* createNode();
void showNodes();

struct Node* Start=NULL;
int top=0;

int main()
{
	int cap;
	cout<<"Enter the capacity of Stack";
	cin>>cap;
	
	pushNode(cap,8);
	pushNode(cap,89);
	pushNode(cap,78);
	pushNode(cap,23);pushNode(cap,18);pushNode(cap,128);pushNode(cap,12228);
	cout<<"PUSHED \n";
	showNodes();
}
struct Node
{
 int info;
 struct Node* link;
 //struct Node* top;
 //int max_nodes;	
};

struct Node* createNode()
{
   struct Node* new_node;
   new_node= new Node;
   return(new_node);
} 

void pushNode(int cap,int item)
{
	struct Node* ptr;
	struct Node* temp;
	temp=createNode();
	temp->info=item;
	ptr=Start;
	
	if(Start==NULL && top!=cap)
	{
		Start=temp;
		temp->link=NULL;
		top++;
	} 
	
	else
	{
		if(ptr!=NULL && top!=cap)
		{
		ptr->link=temp;	
		temp->link=NULL;
		ptr=ptr->link;
			top++;
			//cout<<top;
		}	
    }
}

void showNodes()
{
 struct Node* ptr;
   ptr=Start;
   while(ptr!=NULL)
   {
       cout<<"  "<<ptr->info;
       ptr=ptr->link;
       //count++;
   }
}
