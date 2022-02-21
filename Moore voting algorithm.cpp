// *** Moore voting algorithm ***//

#include <bits/stdc++.h>
using namespace std;
// Function to find majority element
int findMajority(int arr[], int n)
{
	int maj_index = 0, count = 1;
	// Finding majority candidate
	for (int i = 0; i < n; i++) {
		if (count == 0) {
			maj_index = arr[i];
			count = 1;
		}
		else {
			if (arr[i] == maj_index)
				count++;
			else
				count--;
		}
	}
	int ct = 0;
	// Checking if majority candidate occurs more than n/2
	// times
	for (int i = 0; i < n; i++) {
		if (arr[i] == maj_index)
			ct++;
	}

	if (ct > n / 2)
		return maj_index;
	return -1;
}
int main()
{
	int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int majority = findMajority(arr, n);
	cout << " The majority element is : " << majority;
	return 0;
}
