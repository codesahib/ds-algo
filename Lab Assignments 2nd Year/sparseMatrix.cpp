#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int row_index1[20],col_index1[20],values1[20];
  int i,j,count1=0;

  int N1 ;
  int M1 ;
  cout<<"Rows";
  cin>>N1;
  cout<<"Columns";
  cin>>M1;

  // dynamic allocation
  int** ary1 = new int*[N1];
  for(int i = 0; i < N1; ++i)
      ary1[i] = new int[M1];

  // fill
  for(int i = 0; i < N1; ++i)
    for(int j = 0; j < M1; ++j)
    {
    cout<<"enter "<<i<<j<<"  ";
    cin>>ary1[i][j];
    }

    //*********************************************************
 for(i=0;i<N1;i++)
 {
     for(j=0;j<M1;j++)
     {
          if(ary1[i][j]!=0)
            {
            count1++;

            row_index1[count1-1]=i+1;
            col_index1[count1-1]=j+1;
            values1[count1-1]=ary1[i][j];
            }
     }
 }
//sparse_rows=count1;
   //declare sparse
    int** sparse_A = new int*[count1];
  for(int i = 0; i < count1; ++i)
      sparse_A[i] = new int[3];

   //fill sparse
    for(i=0;i<count1;i++)
 {
     for(j=0;j<1;j++)
     {
            sparse_A[i][j]=row_index1[i];
            sparse_A[i][j+1]=col_index1[i];
            sparse_A[i][j+2]=values1[i];
     }
 }

 for(i=0;i<count1;i++)
 {
     cout<<"\n";
     for(j=0;j<3;j++)
     {
            cout<<"  "<<sparse_A[i][j]<<" ";

     }
     cout<<"\n";
 }
//SECOND ARRAY
  int row_index2[20],col_index2[20],values2[20];
  int count2=0;
 int N2 ;
  int M2 ;
  cout<<"Rows";
  cin>>N2;
  cout<<"Columns";
  cin>>M2;

  // dynamic allocation
  int** ary2 = new int*[N2];
  for(int i = 0; i < N2; ++i)
      ary2[i] = new int[M2];

  // fill
  for(int i = 0; i < N2; ++i)
    for(int j = 0; j < M2; ++j)
    {
    cout<<"enter "<<i<<j<<"  ";
    cin>>ary2[i][j];
    }
//*********************************************************
 for(i=0;i<N2;i++)
 {
     for(j=0;j<M2;j++)
     {
          if(ary2[i][j]!=0)
            {
            count2++;

            row_index2[count2-1]=i+1;
            col_index2[count2-1]=j+1;
            values2[count2-1]=ary2[i][j];
            }
     }
 }
//sparse_rows=count1;
   //declare sparse
    int** sparse_B = new int*[count2];
  for(int i = 0; i < count2; ++i)
      sparse_B[i] = new int[3];

   //fill sparse
    for(i=0;i<count2;i++)
 {
     for(j=0;j<1;j++)
     {
            sparse_B[i][j]=row_index2[i];
            sparse_B[i][j+1]=col_index2[i];
            sparse_B[i][j+2]=values2[i];
     }
 }
 for(i=0;i<count2;i++)
 {
     cout<<"\n";
     for(j=0;j<3;j++)
     {
            cout<<"  "<<sparse_B[i][j]<<" ";
     }
     cout<<"\n";
 }

 //ADDING BOTH
 int add[20][20];
 for(i=0;i<2;i++)
    {

    for(j=0;j<1;j++)
    {
        add[i][j]=sparse_A[i][j];
        add[i][j+1]=sparse_A[i][j+1];
        add[i][j+2]=sparse_A[i][j+2];

    }

    }


    for(i=0;i<2;i++)
    {

    for(j=0;j<1;j++)
    {
        cout<<" "<<add[i][j]<<" ";
    }
      cout<<"\n";
    }
}
