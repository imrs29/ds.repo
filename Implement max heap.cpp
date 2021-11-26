#include<bits/stdc++.h>
using namespace std;


void max_Heapify(int arr[], int n, int i){

	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left < n && arr[left] > arr[i])
		largest = left;
	else
		largest = i;

	if(right < n && arr[right] > arr[largest])
		largest = right;

	if(largest != i){
		swap(arr[i], arr[largest]);

		max_Heapify(arr, n, largest);
	}
}

void buildHeap(int arr[] , int n){

	int startIdx = (n / 2) - 1;

	for(int i = startIdx; i >= 0; i--){
		max_Heapify(arr, n, i);
	}
}


void printHeap(int arr[] , int n){
	cout << "Array representation of Heap is:\n";

	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}



int main(){

	int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};

	int n = sizeof(arr) / sizeof(arr[0]);

	buildHeap(arr, n);
	printHeap(arr, n);
	return 0;

}

// 17 15 13 9 6 5 10 4 8 3 1 