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

bool isEqual(string &mainStr, string subS, int s) {
    
    int t = subS.size();
    int i = s;
    int j = 0;
    while(t--) {
        
        if(mainStr[i] != subS[j]) {
            return false;
        } 
        else {
            i++;
            j++;
        }
    }
    return true;
}

int strStr(string haystack, string needle) {
    
    int k = needle.size();
    
    int i = 0;
    int j = k-1;
    
    while(j < haystack.size()) {
        if(isEqual(haystack, needle, i)) {
            return i;
        }
        else {
            i++;
            j++;
        }
    }
    cerr << "i : " << i << "\n";
    return -1;
}


void Solution(){
        
    string haystack, needle; 
    cin >> haystack >> needle;
    
    cout << strStr(haystack, needle);
    
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

https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

*/

/* Complexities

Time Complexity : O(N)

Space Complexity : O(1), because at max we traverse k chars

*/

/*    Sample Testcases

Case #1:


Case #2:
leetcode
code

Case #3:
sadbutsad
sad

*/