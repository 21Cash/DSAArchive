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

int ans = INT_MAX;

void Solve(vector<int> &v, int cur=0, int energyUsed = 0) {
	if(cur == v.size()-1) {
		
		ans = min(ans, energyUsed);
		return;
	}
	// Jump 1 Step
	if(cur+1 < v.size()) {
		int e = abs(v[cur] - v[cur+1]);
		Solve(v, cur+1, energyUsed+e);
	}
	// Jump 2 Steps
	if(cur+2 < v.size()) {
		int e2 = abs(v[cur] - v[cur+2]);
		Solve(v, cur+2, energyUsed+e2);
	}
	
}

void CalculateEnergy(vector<int> &v) {
	
	
	Solve(v);
	
}

void Solution(){
		
	int n;
	cin >> n;
	vector<int> v(n);
	
	rep(i, 0, n) {
		cin >> v[i];	
	}
	
	CalculateEnergy(v);
	cout << ans;
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

/*

Problem Statement: 
You are Given A List Of Integers Of Size 'n' In Which v[i] is The Energy At The Index

Frog Is at Index 0

Frog Can Jump For 1 step or 2 step
The Energy Used Will Be abs(v[i] - v[jumpedIndex])


Calculate the Minimum Energy Which Can Used By Frog To The Reach the End


*/