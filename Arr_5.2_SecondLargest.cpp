#include <iostream>
using namespace std;
int get_SecondLargest(int arr[],int n)
{	
	int idx_1=0; //largest 
	int idx_2=-1;// Second largest(can return -1 at end if not second largest found)
	// ith element = largest :ignore the condition 
	// ith element != Largest: 
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[idx_1])
		{
			if(arr[i]>arr[idx_1])//array ith greater than largest
			{
				idx_2=idx_1; //largest to second largest
				idx_1=i;		//ith to largest
				
			}//second largest found 1st time or if ith larger than second largest 
		else if(idx_2==-1||arr[i]>arr[idx_2])
		{
			idx_2=i;
		}
		}
	}
	return idx_2;
}
//Driver code
int main()
{
	int arr[]={100,0,200,200,134,0,45,56,78,98,134,0,0,23};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sec_lar=get_SecondLargest(arr,n);
	cout<<"Second largest element "<<arr[sec_lar]<<"\n ";
	cout<<"At index: "<<sec_lar<<"\n";
	//cout<<arr[lar];
	return 0;
}	
	
