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

// Brute - O(N^2)
// int maxSubArray(vector<int>& nums) {
    
//     int best = INT_MIN;
    
//     for(int i = 0; i < nums.size(); i++) {
//         int sum = 0;
//         for(int j = i; j < nums.size(); j++) {
//             sum += nums[j];
//             best = max(sum, best);
//         }
//         best = max(sum, best);
//     }
//     return best;
// }


// O(N) Solution
int maxSubArray(vector<int>& nums) {
    

    int best = INT_MIN;
    int sum = 0;
    for(int i : nums) {
        sum += i;
        best = max(best, sum);
        
        if(sum < 0) sum =0;
    }
    return best;
}

void Solution(){
        
    int n;
    cin >> n;
    
    vector<int> v = InputVector(n);
    
    cout << maxSubArray(v);
    
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

https://leetcode.com/problems/maximum-subarray/

*/