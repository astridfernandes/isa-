#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
<<<<<<< HEAD
    for (i = 0; i < n-1; i++)
    	// Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
}      
