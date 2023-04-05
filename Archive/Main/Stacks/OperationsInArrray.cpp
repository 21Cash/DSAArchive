#include <bits/stdc++.h>
using namespace std;




void insertIntoArray(int* arr, int size, int x, int pos) {
	int i = size - 1;
	while(i != pos) {
		swap(arr[i], arr[i-1]);
		i--;
	}
	arr[i] = x;
}

void printArray(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << "\n";
}

void deleteElement(int* arr, int n, int delPos) {
	for(int i = delPos; i < n-1; i++) {
		swap(arr[i], arr[i+1]);
	}
	arr[n-1] = 0;
}

void bubbleSort(int* arr, int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}

void Solution(){
	
	int arr[10] = {1, 10, 0, 8, 3, 2};
	int size = 10;
	
	cout << "Before : \n";
	printArray(arr, size);
	// insertIntoArray(arr, 10, 9, 4);
	// deleteElement(arr, size, 1);
	bubbleSort(arr, size);
	printArray(arr, size);

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