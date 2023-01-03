#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;
#define PI 3.141592653589793238462
#define rep(i,a,b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#ifndef ONLINE_JUDGE
#define db(x) cout<<#x<<" : "<<x<<endl;
#define debug(x) cerr<<#x<<" : "<<x<<endl;
#define pvec(v) cout<<"[";rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;
#else
#define pvec(v) ;rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<endl;
#define db(x)
#define debug(x)
#endif
#define getVal(c) (c-'a'+1)

const int N = 0;

int GetDuplicate(vector<int> v) {
	
	int fast = v[0];
	int slow = fast;
	
	do {
		fast = v[fast];
		fast = v[fast];
		
		slow = v[slow];
	}
	while(fast != slow);
	
	fast = v[0];
	
	while(fast != slow) {
		
		fast = v[fast];
		slow = v[slow];
	}
	
	return slow;
}


void Solution(){
		
	int n;
	cin >> n;
	vector<int> v(n);
	
	rep(i, 0, n) {
		cin >> v[i];
	}
	int ans = GetDuplicate(v);
	
	cout << ans;	
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t = 1;
	//cin >> t;
	while(t--){
		Solution();
	}
	return 0;
}

/* LeetCode Link

https://leetcode.com/problems/find-the-duplicate-number/

*/



/* Complexities

Time Complexity : O(N)

Space Complexity : O(1)

*/

/*	Sample Testcases

Case #1:
5
3 1 3 4 2

Case #2:


Case #3:


*/

