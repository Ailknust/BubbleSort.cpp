#include<bits/stdc++.h>
using namespace std;

/*void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i , j;
    for(i = 0; i< n-1; i++)
    {
        for(j = 0; j< n-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        cout<< arr[i] << " "<<endl;
}
int main()
{
    int arr[] = {64 , 34 , 25 , 12 , 22 , 11 , 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr , n);
    cout<< "Sorted  arry : \n";
    printArray(arr , n);
    return 0;
}*/
void bubbleSort(int array[], int n)
{
	int i, j, temp;
	for (i = 0; i < n-1; i++)
        {
            for (j = 0; j < n-i-1; j++) {
                if (array[j] > array[j+1])
                    {
                        temp= array[j];
                        array[j]= array[j+1];
                        array[j+1]= temp;
                    }
            }
        }
}

int main()
{
	int i, array[] = {12, 11, 13, 5, 6};
	int n = sizeof(array)/sizeof(array[0]);
	bubbleSort(array, n);
	cout<<"Sorted array: ";
	for (i = 0; i < n; i++)
		cout << array[i] <<" ";
	return 0;
}
