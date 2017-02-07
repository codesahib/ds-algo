#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,n,element,count=0;
	
	int *arr=NULL;
	cout<<"Enter the number of elements in the array";
	cin>>n;
	
	arr=new int[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	//search algorithm
	cout<<"Enter the element to be searched";
	cin>>element;
	
	for(i=0;i<n;i++)
	{
		if(element==arr[i])
		{
		cout<<"Element found: "<<element;
		count++;
	    }
	
	}
	
	if(count==0)
	cout<<"Element not found";

	/*	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	*/
return 0;	
}
