#include <iostream>
using namespace std;
//Function to insert an element in an array 
int insert(int arr[],int n,int x,int pos,int cap)
{
	int idx=pos-1;
	//check capacity of array
	if (n==cap)
	return n;
	//shifting array
	for(int i=n;i>=idx;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[idx]=x;
	return n+1;
}
int main()
{
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int cap = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int x,pos;
    
 
    cout << "\n Before Insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i]<< " ";
	cout<<"Enter the element and postion: \n";
	cin>>x;
	cin>>pos;
    // Inserting key
    n = insert(arr, n,x,pos,cap);
 
    cout << "\n After Insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
 

