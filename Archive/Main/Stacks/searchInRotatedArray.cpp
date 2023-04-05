#include <bits/stdc++.h>
using namespace std;

#define pvec(v) cout<<"[";for(int x=0;x<v.size();x++){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;





void InputVector(vector<int> &v, int n) {
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
}

int getPivot(vector<int> &arr) {
	
	int s = 0, e = arr.size() - 1;
	int mid = s + (e - s) / 2;
	
	while(s <= e) {
		if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) {
			return mid;
		}
		else if(arr[mid] > arr[0]) {
			s = mid + 1;
		}
		else {
			e = mid -1;
		}
		mid = s + (e - s) / 2;
	}
	return -1;
}

int binarySearch(vector<int> &arr, int s, int e, int x) {
	int mid = s + (e - s) / 2;
	while(s <= e) {
		if(arr[mid] == x) return mid;
		else if(arr[mid] < x) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
		mid = s + (e - s) / 2;
	}
	return -1;
}

int search(vector<int> &arr, int x) {
	int pivot = getPivot(arr);
	int res1 = binarySearch(arr, 0, pivot-1, x);
	int res2 = binarySearch(arr, pivot, arr.size() - 1, x);
	if(res1 != -1) return res1;
	else return res2;
}


void Solution(){
	
	int n, x;
	cin >> n >> x;
	
	vector<int> v(n);
	InputVector(v, n);
	cout << search(v, x);
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