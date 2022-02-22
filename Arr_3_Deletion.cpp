//Function to Delete an element from an array
#include<iostream>
using namespace std;
//delete funtion
int delete_element(int arr[],int n,int x)
{	int idx=-1;
	//Finding the element index to be deleted 
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			idx=i;
			break;
		}
	}
	//element found at index 
	if(idx!=-1)
	{
		for(int i=idx;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		return(n-1);//return size of array after deletion
	}
	//element not found
	else
	{
		return(n);//return same size of array
	}
}
//Driver code
int main()
{
	int i;
    int arr[] = {10, 50, 30, 40, 20};
 	int x;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the element to be deleted :\n";
    cin>>x;
 
    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] <<" " ;
 
    n = delete_element(arr, n, x);
 
    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
 
    return 0;
}
