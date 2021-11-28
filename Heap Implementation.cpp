#include<bits/stdc++.h>
using namespace std;
#define SIZE 1001

int heap[SIZE];
int heapSize;

void heap_push(int val){
	if(heapSize >= SIZE){
		cout << "Overflow\n";
		return;
	}

	heap[heapSize] = val; // push 1st element to the end of heap
	int curr = heapSize;
	//percolate-up
	while(curr > 0 and heap[(curr - 1)/2] < heap[curr]){
		int temp = heap[(curr - 1)/2];
		heap[(curr - 1)/2] = heap[curr];
		heap[curr] = temp;

		curr = (curr - 1)/2; // current pointer movess to parent
	}
	heapSize += 1;
}

int heap_pop(){
	if(heapSize <= 0){
		cout << "Underflow\n";
		return -1;
	}

	int curr = 0; // urrent index is 0 whcih is root (storing max elememnt)
	int popped = heap[0]; // Save the element to be popped
	heap[0] = heap[heapSize - 1]; // copy last element to the root
	heapSize -= 1; // Reduce heapSize by 1

	// Max Heapify
	while((2 * curr + 1) < heapSize) // while we don't reach a leaf node
	{
		int child;
		if((2*curr+2) == heapSize) // if we only have leftchild
			child = 2*curr + 1;
		else // if both left and right child are present then find which is maximum
		{
			if(heap[2*curr+1]>heap[2*curr+2])
				child = 2*curr+1;
			else
				child = 2*curr+2;
		}

		// if curr node is lower than max(leftChild, rightChild) then swap and do max_heapify again for that child
		if(heap[curr] < heap[child]){
			int temp = heap[curr];
			heap[curr] = heap[child];
			heap[child] = temp;

			curr = child;
		}else // max heapify is done  (because the curr node is having higher value than both lchild and rchild)
		break;
	}
	return popped;
}

void show_heap(){
	for(int i=0;i<heapSize;i++)
		cout << heap[i]<<" ";
	cout <<"\n";
}

void init(){
	heapSize = 0; // global var
}

int main(){
	
	init();
	while(1){
		cout << "1.Push...2.Pop...3.Show_Heap...4.Terminate\n";
		int option;
		int element;
		cin >> option;

		switch(option){
			case 1:
				cout << "Enter element\n";
				cin >> element;
				heap_push(element);
			break;

			case 2:
				cout << "Popped "<< heap_pop() << "\n";
				break;
			case 3: 
				show_heap();
				break;
			default:
				return 0;

		}
	}
}