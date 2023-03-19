#include <bits/stdc++.h>
using namespace std;





void merge(int* arr, int start, int end) {
	
	int mid = start +  (end - start) / 2;
	int len1 = mid - start + 1; int arr1[len1];
	int len2 = end - mid; int arr2[len2];
	
	
	int k = start;
	for(int i = 0; i < len1; i++) {
		arr1[i] = arr[k++];
	}
	k = mid + 1;
	for(int j = 0; j < len2; j++) {
		arr2[j] = arr[k++];
	}
	
	// int first = 0, second = 0, mainIndex = start;
	int first = 0, second = 0;
	int mainArrayIndex = start;
	
	while(first < len1 || second < len2) {
		if(second >= len2 || arr1[first] < arr2[second]) 
			arr[mainArrayIndex++] = arr1[first++];
		else 
			arr[mainArrayIndex++] = arr2[second++];
	}
	
}


void mergeSort(int* arr, int start, int end) {
	
	if(start >= end) {
		return;
	}
	
	int mid = start + (end - start) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);
	
	merge(arr, start, end); 
	
}

void Solution(){
	
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	mergeSort(arr, 0, n - 1);
	
	for(int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << "\n";
	
	
	
}



// Driver Code {

signed int main(){
	
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t = 1;
	//cin >> t;
	while(t--){
		Solution();
	}
	return 0;
}

// }


/* LeetCode Link



*/