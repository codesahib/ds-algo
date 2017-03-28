#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
int N,i,j,count=0;int *minRow=NULL;int col_store[10];int *maxCol=NULL;
col_store[0]=0;
  cout<<"Enter the order";
  cin>>N;


  minRow=new int[N];
  maxCol=new int[N];

  // dynamic allocation
  int** ary = new int*[N];
  for(int i = 0; i < N; ++i)
      ary[i] = new int[N];

  // fill
  for(int i = 0; i < N; ++i)
    for(int j = 0; j < N; ++j)
    {
    cout<<"enter";
    cin>>ary[i][j];
    }
  // print
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      std::cout << ary[i][j]<<"\t";
      }
      cout<<"\n";
  }
//get minimums from rows
  for(i=0;i<N;i++){
    minRow[i]=ary[i][0];
    col_store[i]=0;

    for(j=0;j<N;j++)
  {

      if(ary[i][j]<ary[i][0])
      {minRow[i]=ary[i][j];
      col_store[i]=j;}
  }
  }

//compare maximums of columns



}
