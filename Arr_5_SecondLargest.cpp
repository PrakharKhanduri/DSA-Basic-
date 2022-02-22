#include<iostream>
using namespace std;
//function to find largest
int get_largest(int arr[],int n)
{
	int idx=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>arr[idx])
		{
			idx=i;
		}
	}
	return idx;
}
//function to  find second largest 
int get_second_largest(int arr[],int n)
{
	int largest=get_largest(arr,n);//Calling func to get largest index
	int sec_largest=-1;//Can return -1 if second largest not found
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[largest])
		{
			if(sec_largest==-1)//1st element found in array apart from largest
			{
				sec_largest=i;
			}
			else if(arr[i]>arr[sec_largest])//if array foun is larger than second largest and not equal to largest
			{
				sec_largest=i;
			}
		}
	}
	return sec_largest;
}
//Driver code
int main()
{
	int arr[]={20,20,20,20,20,5,20,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=get_second_largest(arr,n);
	cout<<"Second largest element "<<arr[x]<<"\n";
	cout<<"At index: "<<x<<"\n";
	return 0;
}

