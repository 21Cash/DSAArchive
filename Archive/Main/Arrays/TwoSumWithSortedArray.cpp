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

pi Solve(vector<int> &v, int n, int t) {
	
	int f = 0;
	int s = n-1;
	
	while(f < s) {
		int tSum = v[f] + v[s];
		
		if(tSum == t) {
			return MP(f+1, s+1);
		}
		else if(tSum < t) {
			f++;
		}
		else {
			s--;
		}
	}
	return MP(-1, -1);
}


void Solution(){
		
	int n, t;
	cin >> n >> t;
	
	vector<int> v(n);
	
	rep(i, 0, n) {
		cin >> v[i];
	}
	
	pi ans = Solve(v, n, t);
	cout << ans.F << " " << ans.S << "\n";
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
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

/* Complexities

Time Complexity : O(N)

Space Complexity : O(1)

*/


/*	Sample Inputs

Case #1:
4 9
2 7 11 15

Case #2:
3 6
2 3 4

Case #3:
2 -1
-1 0

*/


/* LeetCode Link

https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

*/