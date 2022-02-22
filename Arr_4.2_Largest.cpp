//Function to find largest O(n) more efficient 
#include<iostream>
using namespace std;
int get_largest(int arr[],int n)
{
	int idx =0;//assuming arr[0] be largest initially
	//case 1 :arr[i]<=arr largest---- Ignore
	
	//case 2 :arr[i]>arr largest; udpadte idx of the new largest till now
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[idx]) //Check if element at i greater than largest till now so update new largest
		{
			idx=i;
		}	
	}
	return idx;
}
int main()
{	int n;
	int arr[]={10,110,1110,1110,111110,20,60,2,230,90,0,908};
	n=sizeof(arr)/sizeof(arr[0]);
	int x=get_largest(arr,n);
	cout<<"largest element: "<<arr[x]<<"\n";
	cout<<"At index: "<<x<<"\n";
	return 0;
}
