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
#define pvec(v) cout<<"[";rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;
#else
#define pvec(v) ;rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<endl;
#define db(x)
#endif
#define getVal(c) (c-'a'+1)

const int N = 0;





//Get Next Smaller Element Vector
vector<int> Solve(vector<int> &v, int n) {
    
    stack<int> s;
    s.push(-1);
    
    vector<int> ans(n);
    
    for(int i = n - 1; i >= 0; i--) {
        
        while(s.top() >= v[i]) {
            s.pop();
        }
        
        ans[i] = (s.top());
        s.push(v[i]);
    }
    
    return ans;
}


void Solution(){
        
    int n;
    cin>>n;
    
    vector<int> inp(n);
    
    rep(i, 0, n) {
        cin >> inp[i];
    }
    
    vector<int> ans = Solve(inp, n);
    pvec(ans);
    
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


//Problem Link : 
// https://www.codingninjas.com/codestudio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
