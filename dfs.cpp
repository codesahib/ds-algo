#include<iostream>
using namespace std;

//void BFS(int);
void DFS(int);int top=0,check=0;
int visited[10],n;
int stack_check[10];
 int G[10][10]={{0,1,1,0,0},
               {0,0,1,1,1},
               {0,0,0,0,0},
               {0,0,1,0,0},
               {0,0,0,0,0}
               };   //n is no of vertices and graph is sorted in array G[10][10]

int main()
{
     int i,j;
    cout<<"Enter number of vertices:";

    cin>>n;


    //read the adjecency matrix
   // cout<<"\nEnter adjecency matrix of the graph:";

   // for(i=0;i<n;i++)
      // for(j=0;j<n;j++)
        //    cin>>G[i][j];

    //visited is initialized to zero
   for(i=0;i<n;i++)
        visited[i]=0;

    DFS(0);
    //BFS(0);
return 0;
}
/*
void BFS(int i)
{
    int j;
    cout<<i;
    visited[i]=1;

    for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            BFS(j);
}
*/
void DFS(int i)
{
    int j;

    cout<<i;
    check++;
    visited[i]=1;
    for(j=0;j<n;j++)
    {
       //int count=0;
       if(!visited[j]&&G[i][j]==1)
        {
            stack_check[top]=j;
            top++;
            //count++;
        }

    } top--;

    if(check<n)
    DFS(stack_check[top]);

}
