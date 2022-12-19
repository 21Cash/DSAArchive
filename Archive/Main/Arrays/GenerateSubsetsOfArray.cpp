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

void GenerateSubsets(vector<int> &inp, vector<int> tAns, vector<vector<int>> &ans, int i = 0) {
    
    if(i >= inp.size()) {
        ans.PB(tAns);
        return;
    } 
    
    tAns.PB(inp[i]);
    GenerateSubsets(inp, tAns, ans, i+1);
    tAns.pop_back();
    
    GenerateSubsets(inp, tAns, ans, i+1);
    
    
} 


void Solution(){
        
    int n;
    cin>>n;
    
    vector<int> inp(n);
    
    rep(i, 0, n) {
        cin >> inp[i];
    }
    
    vector<vector<int>> subsets;
    vector<int> tAns;
    
    GenerateSubsets(inp, tAns, subsets);
    for(vector<int> v : subsets) {
        pvec(v);
    }
    
    // debug(inp.size());
    // debug(subsets.size());
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

/*

Sample Input #1: 
5
1 2 3 4 5 

Sample Input #2:
4
1 2 3 4

*/