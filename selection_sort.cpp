#include <iostream>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of
	// unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in
		// unsorted array
		min_idx = i;

		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}

		// Swap the found minimum element
		// with the first element

        int temp=0;
        temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}

int main()
{
    int iSize=0;
    
    cout<<"How many elements you want to sort?\n";
    cin>>iSize;
    int *arr=new int(iSize);
    for(int i=0;i<iSize;i++)
    {
        cout<<"Enter the "<<i+1<<" element\n";
        cin>>arr[i];
     }
    cout<<"***elements before the selection sort***\n";
    printArray(arr,iSize);
    selectionSort(arr,iSize);
    cout<<"***elements after the selection sort***\n";
    printArray(arr,iSize);

}

