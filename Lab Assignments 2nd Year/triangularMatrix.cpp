#include <iostream>
using namespace std;

int main() {
int N,i,j,lower_count=0,upper_count=0;
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
//Lower
  for(i=1;i<N;i++)
  {
  for(j=0;j<i;j++)
  {
  if(ary[i][j]!=0)
  {
  lower_count++;
  }

  }
  }

  //Upper
   for(i=0;i<N;i++)
  {
  for(j=1;j>i;j++)
  {
  if(ary[i][j]!=0)
  {
  count++;
  }

  }
  }

  if(lower_count==0)
  cout<<"Lower Triangular";

  if(upper_count==0)
  cout<<"Upper Triangular";

  if(lower_count==0 && upper_count==0 )
cout<<"Diagonal Matrix!!!!!!";


  // free
  for(int i = 0; i < N; ++i)
    delete [] ary[i];
  delete [] ary;

  return 0;
}
