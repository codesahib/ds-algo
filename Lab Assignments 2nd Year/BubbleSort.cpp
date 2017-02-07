#include<iostream>
#include<vector>
using namespace std;
void swap(int*,int*);
int main()
{
	int i,j,n,element,count=0;
	int a,b,temp;
	int *arr=NULL;
	cout<<"Enter the number of elements in the array";
	cin>>n;
	
	arr=new int[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//sort algorithm
	for(i=1;i<n;i++){  //test cases
	
	for(j=0;j<(n-i);j++)  //comparisons
	{
		if(arr[j]>arr[j+1])
		swap(&arr[j],&arr[j+1]);
	/*	{
	
	        temp=arr[j];
	        arr[j]=arr[j+1];
	        arr[j+1]=temp;
	    }*/
	
	}
	
		
}
	
    
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
return 0;	
}

void swap(int* b,int* a)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
