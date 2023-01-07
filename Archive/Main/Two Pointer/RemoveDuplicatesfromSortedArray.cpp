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


int RemoveDuplicates(vector<int> &v) {
    
    int n = v.size();
    
    int i = 0;
    int j = 1;
    
    while(j < n) {
        if(v[i] != v[j]) {
            v[++i] = v[j];
        }
        else {
            j++;
        }
    }
    return i+1;
}



void Solution(){
        
    int n;
    cin >> n;
    vector<int> v(n);
    
    rep(i, 0, n) {
        cin >> v[i];
    }
    
    int len = RemoveDuplicates(v);    
    PrintLst(v, len);
}


signed int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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
/* LeetCode Link

https://leetcode.com/problems/remove-duplicates-from-sorted-array/

*/

/*    Sample Testcases

Case #1:
5
1 1 2 2 5

Case #2:


Case #3:


*/