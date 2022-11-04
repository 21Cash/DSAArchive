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
vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> ans;


void CalculateOutcomes(vector<int> &inp, int n, string tAns = "", int i = 0) {
    if(i >= inp.size()) {
        ans.PB(tAns);
        return;
    }
    
    for(int j = 0; j < keys[inp[i]].size(); j++) {
        CalculateOutcomes(inp, n, tAns+keys[inp[i]][j], i+1);
    }
    
}


void Solution(){
        
    int n;
    cin>>n;
    
    vector<int> inp(n);
    
    rep(i, 0, n) {
        cin >> inp[i];
    }
    
    CalculateOutcomes(inp, n);
    
    for(string s : ans) {
        cout << s << "\n";
    }
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
    
    while(t--){
        Solution();
    }
    return 0;
}
