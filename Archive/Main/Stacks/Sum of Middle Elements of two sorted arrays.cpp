#include <bits/stdc++.h>
using namespace std;


#define pvec(v) cout<<"[";for(int x=0;x<v.size();x++){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;

void InputVector(vector<int> &v, int n) {
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
}


int getMid(vector<int> &arr1, vector<int> &arr2, int N) {
	
	int stepsToTake = ((2 * N) / 2 ) - 1;
	int i = 0, j = 0;
	int steps = 0;
	
	while(steps < stepsToTake) {
		if(arr1[i] < arr2[j]) {
			i++;
		}
		else if(arr1[i] > arr2[j]) {
			j++;
		}
		else {
			// Equal Case
			if(arr1[i+1] <= arr2[j+1]) {
				i++;
			}
			else {
				j++;
			}
		}
		steps++;
	}
	return arr1[i] + arr2[j];
}

void Solution(){
	
	int n;
	cin >> n;
	vector<int> arr1(n);
	vector<int> arr2(n);
	
	InputVector(arr1, n);	
	InputVector(arr2, n);	
	
	cout << getMid(arr1, arr2, n);
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