#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#ifndef ONLINE_JUDGE
#define debug(x) cout<<#x<<" : "<<x<<endl;
#define pvec(v) ;rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<endl;
#else
#define pvec(v) cout<<"[";rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;
#define debug(x)
#endif
#define getVal(c) (c-'a'+1)

const int N = 0;









void Solution(){
        
    int n;
    cin>>n;
    vector<int> v;
    
    rep(i,0,n) {
        int t;
        cin>>t;
        v.PB(t);
    }
    
    pi inds;
    
    int best = INT_MIN;
    int curSum = 0;
    rep(i,0,n) {
        if(curSum + v[i] > v[i]) {
            curSum = curSum + v[i];
        } else { 
            curSum = v[i];
            inds.F = i;
        }
        if(curSum > best) {
            inds.S = i;
            best = curSum;
        }
    }
    if(best == 0) {
        inds.F = -1;
        inds.S = -1;
    }
    debug(best);
    cout<<"Start : " << inds.F << ", " << "End : " << inds.S << endl;
    
}


signed int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    
    while(t--){
        Solution();
    }
    return 0;
}