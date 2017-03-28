#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
int N,i,j,count=0;
  cout<<"Enter the order";
  cin>>N;

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

  for(i=1;i<N;i++)
  {
  for(j=0;j<i;j++)
  {
  if(ary[i][j]==ary[j][i])
  {
      count++;

  }
  }
  }


  if(count==(N*N-N)/2)
  {
      cout<<"Symmetric";
  }

  else
    cout<<"Not Symmetric";
}
