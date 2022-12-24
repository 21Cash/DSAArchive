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


int helper(int n, int* arr) {
    if(n <= 2) return n;

    int prev1, prev2;

    if(arr[n-1] != -1) {
        prev1 = arr[n-1];
    }
    else {
        prev1 = helper(n-1, arr);
        arr[n-1] = prev1;
    }

    if(arr[n-2] != -1) {
        prev2 = arr[n-2];
    }
    else {
        prev2 = helper(n-2, arr);
        arr[n-2] = prev2;
    }
    return prev1 + prev2;
}

int climbStairs(int n) {
    
    int arr[n+1];

    for(int i = 0; i < n+1; i++) {
        arr[i] = -1;
    }
    return helper(n, arr);
}


void Solution(){
        
    int n;
    
    cin >> n;
    
    cout << climbStairs(n);
    
    
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

/* LeetCode Link

https://leetcode.com/problems/climbing-stairs/

*/

/*    Sample Testcases

Case #1:
1

Case #2:
2

Case #3:
10

*/