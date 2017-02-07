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
	/*for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}*/
	cout<<"We already have a sorted array"<<endl;

	//Search Algorithm
	cout<<endl<<"Enter the value to be searched"<<endl;
	cin>>element;
	int low=0,high=n-1,mid,mid_element;
	while(high>=low)
    {
	mid=(low+high)/2;
	mid_element=arr[mid];
	if(arr[mid]==element)
       {
        cout<<"Element found"<<element;
        count++;
        break;
       }
	else if(arr[mid]<element)
        low=arr[mid];
    else
        high=arr[mid];
    }

    if(count==0)
        //cout<<endl<<"********-------------**********";
        cout<<"Element not found";
return 0;
}
void swap(int* b,int* a)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

