#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
int N,i,j=0,sum=0;
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


  for(i=0;i<N;i++)
  {
    while(j==i)
    {
        sum=sum+ary[i][j];
        j++;
    }
  }

  cout<<"\n \n"<<"Sum  =  "<<sum;
}
