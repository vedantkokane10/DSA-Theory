#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[6] = {1,3,6,4,7,2};
	int n = 6;
	// Bubble Sort
	for(int i=n-1;i>=1;i--){
		bool didSwap = 0;         // if array already sorted (Best case)
		for(int j=0;j<i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				didSwap++;
			}
		}
		if(didSwap == 0){
			break;
		}
	}

	for(auto x:arr){
		cout<<x<<" ";
	}
	return 0;
}

// Worst / Avg ==> O(n^2)
// Best ==> O(n) if array is already sorted
