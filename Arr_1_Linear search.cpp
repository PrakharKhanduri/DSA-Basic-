//Funtion to Search an element in a 1d array(unsorted)(Linear Search) and return index or -1(if not found)
#include <iostream>
using namespace std;
//Search fuction
int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		return i;//array found at index i(1st appreance)
	}
	return -1;//not found
}
//Driver code
int main()
{	int n;
	cout<<"Enter the size of array \n";
	cin>>n;
	int arr[n];
	int x;
	int y;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element: "<<i+1<<"\n";
		cin>>arr[i];
	}
	cout<<"enter the element to be searched\n";
	cin>>x;
	y=search(arr,n,x);//function call
	cout<<y;
	return 0;
}
