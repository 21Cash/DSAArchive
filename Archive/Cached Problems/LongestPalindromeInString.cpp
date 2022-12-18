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
	string ans = "";
	
	int i = s;
	
	while(i <= e) {
		ans.PB(str[i]);
		i++;
	}
	return ans;
}

string GetPalindrome(string &str) {
	
	int n = sz(str);
	
	string best = "";
	
	
	for(int i = 0 ; i < n; i++) {
		
		
		for(int j = i+1; j < n; j++) {
			
			
			bool isPalindrome = true;
			
			// Check For Palindrome
			int f = i;
			int s = j;
			while(f < s) {
				if(str[f] != str[s]) {
					isPalindrome = false;
				}
				f++;
				s--;
			}
			int len = j-i+1;
			if(isPalindrome && sz(best) < len) {
				best = GetString(str, i, j);
			}
		}
		
	}
	
	
	if(best == "") {
		cout << "No Palindrome Found" << '\n';
	}
	return best;
}

void Solution(){
		
	string str;
	cin >> str;
	
	cout << GetPalindrome(str) << '\n';
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
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