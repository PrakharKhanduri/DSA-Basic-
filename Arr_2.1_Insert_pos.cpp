//Inserting an element at given position in an array and returning the final array 
#include <iostream>
using namespace std;
//Insert function(Return type is pointer of the array)
int* insert (int arr[],int n,int x,int pos)//capacity is not considered.
{
	//Identity index to insert at
	int idx=pos-1;
	//Shifting the array elements one forward
	for(int i=n-1;i>=idx;i--)
	{
		arr[i+1]=arr[i];
	}
	//Updating the element at postion
	arr[idx]=x;
	return arr;
}
//Driver code
int main()
{
	int arr[100]={0};
	int n=10;
	int x;
	int pos;
for(int i=0;i<10;i++)
{
	arr[i]=i+1;
}

// print the original array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
cout<<"Enter the element and postion: \n";
cin>>x;
cin>>pos;
insert(arr,n, x, pos);
  
// print the updated array
    for (int i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

