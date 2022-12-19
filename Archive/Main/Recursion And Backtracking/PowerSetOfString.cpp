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

void CalculateOutcomes(string inp, int i, string tAns, vector<string> &ans) {
    if(i >= inp.size()) {
        
        ans.PB(tAns);
        // return ans;
        return;
    }
    
    //Include Call
    tAns.PB(inp[i]);
    CalculateOutcomes(inp, i+1, tAns, ans);
    tAns.pop_back();
    
    //Exclude Call
    CalculateOutcomes(inp, i+1, tAns, ans);
    tAns.pop_back();
    
}



void Solution(){
        
    string str;
    cin >> str;
    
    
    vector<string> ans;
    
    CalculateOutcomes(str, 0, "", ans);
    
    for(string s : ans) { 
    
        cout << s << "\n";
    }
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