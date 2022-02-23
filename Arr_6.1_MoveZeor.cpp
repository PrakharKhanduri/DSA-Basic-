#include<iostream>
using namespace std;
int* move_zeros(int arr[],int n)
{
	for(int i=0;i<n;i++)//to iterate over non zero elements
	{
		if(arr[i]==0)//if 0 found at ith element 
		{
			for(int j=i+1;j<n;j++)//to iterate after the zero
			{
				if(arr[j]!=0)//finding non zero after ith element to swap 
				{
					swap(arr[i],arr[j]); //swap() inbulid funtion 
					/*int t=arr[i]; //implementation of swap()
					arr[i]=arr[j];
					arr[j]=t;*/
				}
			}
		}
	}
	return arr;
}
//Driver code
int main()
{
	int arr[]={0,0,100,100,23,45,34,0,0,0,0,12,12,120,0,56,0};
	int n= sizeof(arr)/sizeof(arr[0]);


// print the original array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

  move_zeros(arr,n);
// print the updated array
    for (int i = 0; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
