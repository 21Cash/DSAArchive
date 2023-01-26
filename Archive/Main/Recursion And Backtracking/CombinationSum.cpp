#include <bits/stdc++.h>
using namespace std;

#define pvec(v) cout<<"[";for(int x=0;x<v.size();x++){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;


const int N = 0;

vector<int> InputVector(int n) {
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}


void Solve(vector<vector<int>> &ans,vector<int> &candidates, int target, vector<int> temp, int i = 0, int tSum = 0) {
    if(tSum > target) {
        return;
    }
        
    if(i >= candidates.size()) {
        if(tSum == target) {
            ans.push_back(temp);
        }
        return;
    }
    
    // Include Call
    temp.push_back(candidates[i]);
    tSum += candidates[i];
    Solve(ans, candidates, target, temp, i, tSum);
    tSum -= candidates[i];
    temp.pop_back();
    // Exclude Call
    Solve(ans, candidates, target, temp, i+1, tSum);
    
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
    vector<vector<int>> ans;
    vector<int> v;
    Solve(ans, candidates, target, v, 0);
    return ans;
}

void Solution(){
        
    int n, t;
    cin >> n >> t;
    
    vector<int> v = InputVector(n);
    
    vector<vector<int>> ans = combinationSum(v, t);
    
    for(vector<int> vec : ans) {
        pvec(vec);
    }
    
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