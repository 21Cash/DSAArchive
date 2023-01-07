
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

string GetString(string &str, int s, int e) {
	string subString = "";
	for(int i = s; i <= e; i++) {
		subString.PB(str[i]);
	}
	return subString;
}

string GetSubString(string &str) {
	
	int n = str.size();
	
	unordered_set<char> s;
	string best = "";
	
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			s.clear();
			bool hasRepeating = false;
			
			string subS = GetString(str, i, j);
			
			for(char c : subS) {
				if(s.count(c)) {
					hasRepeating = true;
					break;
				}
				else {
					s.insert(c);
				}
			}
			
			if(!hasRepeating) {
				if(subS.size() >= best.size()) {
					best = subS;
				}
			}
			
		}
	}
	
	return best;
	
}


void Solution(){
		
	string str;
	cin  >> str;


	cout << GetSubString(str) << '\n';
	
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

/* LeetCode Link

https://leetcode.com/problems/longest-substring-without-repeating-characters/

*/


/*	Sample Inputs

Case #1:
abcabcbb

Case#2:
bbbbb

Case #3:
pwwkew

*/