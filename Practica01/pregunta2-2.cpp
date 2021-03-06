//BUBBLE SORT

/*
[2] Copiar codigos en el lenguaje de su preferencia:
1. Copiar el código de insert sort Wikipedia
2. Copiar el código de buble sort Wikipedia.
Medir el tiempo.*/

#include<ctime>
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	
	// Last i elements are already in place 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{ 
    clock_t t;
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    t=clock();
	  bubbleSort(arr, n); 
    t=clock()-t;

    cout<<"Sorted array: \n"; 
    printArray(arr, n); 

    cout<<"El tiempo fue de "<<float(t)*1000/CLOCKS_PER_SEC<<" ms"<<endl;
	  return 0; 
} 

//Fuente:geeksforgeeks 
