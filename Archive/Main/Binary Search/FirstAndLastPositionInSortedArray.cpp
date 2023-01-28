#include <bits/stdc++.h>
using namespace std;



const int N = 0;

vector<int> InputVector(int n) {
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

int getLast(vector<int> &v, int x) {
    
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    
    int pos = -1;
    while(s <= e) {
        
        if(v[mid] == x) {
            pos = mid;
            s = mid+1;
        }
        else if(v[mid] < x) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    
    return pos; 
}

int getFirst(vector<int> &v, int x) {
    
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    
    int pos = -1;
    while(s <= e) {
        
        if(v[mid] == x) {
            pos = mid;
            e = mid - 1;
        }
        else if(v[mid] < x) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    
    return pos; 
    
}


void Solution(){
        
    int n, x;
    cin >> n >> x;
    
    vector<int> v = InputVector(n);
    
       
    int f = getFirst(v, x);
    int l = getLast(v, x);
    cout << f << " " << l;
    
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

https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

*/