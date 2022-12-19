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

int GetMedian(vector<int> &v1, vector<int> &v2) {
	
	
	int mid = (sz(v1) + sz(v2)) / 2;
	int i = 0;
	
	int f = 0;
	int s = 0;
	
	int median = -1;
	
	while(i < mid-1) {
		if(v1[f] < v2[s]) {
			f++;
			median = v1[f];			
		}
		else {
			s++;
			median = v2[s];
		}
		i++;
	}
	
	// db(f);
	// db(s);
	// db(i);
	
	return median;
	
}


void Solution(){
		
	int n1, n2;
	cin >> n1 >> n2;
	
			
	vector<int> v1(n1);
	vector<int> v2(n2);
	
	rep(i, 0, n1) {
		cin >> v1[i];
	}
	
	rep(i, 0, n2) {
		cin >> v2[i];
	}
	
	int ans = GetMedian(v1, v2);
	cout << ans << '\n';
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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