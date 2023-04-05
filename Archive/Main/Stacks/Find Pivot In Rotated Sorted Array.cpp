#include <bits/stdc++.h>
using namespace std;



int getPivot(vector<int> &arr) {
    int s = 0, e = arr.size() - 1;
    
    int mid = s + (e - s) / 2;
    
    while(s <= e) {
        if(arr[mid-1] > arr[mid] && arr[mid] < arr[mid+1]) {
            return mid;
        }
        else if(arr[mid] < arr[0]) {
            e = mid - 1;
        }
        else{
            s = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    
    return -1;
}

void InputVector(vector<int> &v, int n) {
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
}

void Solution(){
	
	int n; cin >> n;	
	vector<int> v(n);	
	
	InputVector(v, n);
	cout << getPivot(v);
	
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