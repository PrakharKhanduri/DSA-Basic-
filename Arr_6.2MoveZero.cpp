#include <iostream>
using namespace std;
int* Move_Zero(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[count]);
			count +=1;
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

  Move_Zero(arr,n);
// print the updated array
    for (int i = 0; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
