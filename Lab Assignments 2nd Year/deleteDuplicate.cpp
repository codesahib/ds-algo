#include<iostream>
using namespace std;

int main()
{
	int n,i,p;
	int *arr=NULL;
	
	cout<<"Enter the no. of elements";
	cin>>n;
	arr=new int[n];
	//input
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//delete
	cout<<"Enter the position";
	cin>>p;
	for(i=p;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	
	}
	
/*	int *b;
	b=&arr[n-1];
    *arr(n-1)=NULL;
*/	
	
	//print
	for(i=0;i<n-1;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
