#include<iostream>
using namespace std;
int* Reverse(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(end>start)
	{
		//swap(arr[start],arr[end]);
		int t=arr[start];
		arr[start]=arr[end];
		arr[end]=t;
		start++;
		end--;
	}
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

  Reverse(arr,n);
// print the updated array
    for (int i = 0; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
