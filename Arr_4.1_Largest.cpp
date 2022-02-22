//Function to find largest element in array(Naive app.) O(n^2)
#include <iostream>
using namespace std;
int largest_get(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		for(int j=0;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				flag=false;
				break;
			}
		}
	if(flag==true)
	{
		return i;
	}
	}
	return -1;
}
//driver code
int main()
{
	int arr[]={10,20,34,34,25,2,3,4};
	int	n=sizeof(arr)/sizeof(arr[0]);
	cout<<largest_get(arr,n);
	return 0;
}
