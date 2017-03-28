#include<iostream>
using namespace std;
int main()
{ int n,c=0;
cout<<"enter the size of array";
cin>>n;
int *a=NULL;
a=new int[n];    //dynamic declaration
for(int i=0;i<n;i++)
{ cout<<"enter the element";
cin>>a[i];
}
for(int i=0;i<n;i++){

 for(int j=i+1;j<n;j++){
  if(a[i]==a[j]){c++;
   for(int k=i;k<n;k++){
    a[k]=a[k+1];
   }

   }
  }


  }


for(int g=0;g<n-c;g++){
    cout<<a[g]<<endl;
   }
return 0;
}


