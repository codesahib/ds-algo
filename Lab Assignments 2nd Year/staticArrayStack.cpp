#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Stack* createStack(int cap);
int isFull(struct Stack* s);
int isEmpty(struct Stack* s);
void push(struct Stack* s,int item);
int pop(struct Stack* s);
int main()
{
   int choice;
   int cap;
   struct Stack* s;
   cout<<"Enter the capacity of stack : ";
   cin>>cap;
   s=createStack(cap);
   while(1)
   {
       cout<<"\n \nEnter your choice  :  ";
       cin>>choice;

       switch(choice)
       {
       case 1:
           int item,check;
        cout<<"Enter item to be pushed : ";
        cin>>item;
        push(s,item);
        break;

       case 2:
       item=pop(s);
       if(item==-1)
        cout<<"\n Stack is empty \n \n";
       else
       cout<<"Item popped : "<<item;
        break;

       case 3:
        exit(0);
        break;

       default:
        cout<<"Please Enter a valid choice \n";
       }
   }
   return 0;
}

struct Stack
{
    int top;
    unsigned capacity;
    int* arr;
};

struct Stack* createStack(int cap)
{
  struct Stack* s;
  s=new struct Stack;

  s->top=-1;
  s->capacity=cap;

  //THE PROBLEM SOLVER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  int* ary=NULL;
  ary=new int[cap];
  s->arr=ary;

  return(s);
};

int isFull(struct Stack* s)
{
    if(s->top==s->capacity-1)
    {
        return(1);
    }
    else
        return(0);
}

int isEmpty(struct Stack* s)
{
    if(s->top==-1)
    {
        return(1);
    }
    else
        return(0);
}

void push(struct Stack* s,int item)
{
    if(!isFull(s))
    {
      s->top++;
      s->arr[s->top]=item;
    }
    else
        cout<<"O Lull, Stack is Full :P \n";
}

int pop(struct Stack* s)
{
    //cout<<isEmpty(s);
    if(!isEmpty(s))
    {
       int item;
       item=s->arr[s->top];
       s->top--;
       return(item);
    }
    else
        return(-1);
}
