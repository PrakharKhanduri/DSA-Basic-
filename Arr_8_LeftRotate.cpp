//Funtion to left rotate array
#include <iostream>
using namespace std;
int* left_rotate(int arr[],int n)
{
	int e=arr[0];
	for(int i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=e;
	return arr;
}
//Driver code
int main()
{
	int arr[]={0,0,100,100,23,45,34,0,0,0,0,12,12,120,0,56};
	int n= sizeof(arr)/sizeof(arr[0]);


// print the original array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

  left_rotate(arr,n);
// print the updated array
    for (int i = 0; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
