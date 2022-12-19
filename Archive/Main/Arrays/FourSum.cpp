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
vector<vector<int>> ans;


bool GetSum(vector<int> v, int n, int t) {
    
    sort(all(v));
    // cout << "Sorted : " << "\n";
    pvec(v);
    
    bool found = false;
    
    for(int i =0; i < n; i++) {
        for (int j = i+1; j < n; j++)
        {
            int f = j+1;
            int e = n - 1;
            while(f < e) {                    
                int sum = v[i] + v[j] + v[f] + v[e];
                if(sum == t) {
                    
                    //Push All Elements
                    vector<int> temp;
                    
                    temp.PB(v[i]);
                    temp.PB(v[j]);
                    temp.PB(v[f]);
                    temp.PB(v[e]);
                    
                    ans.PB(temp);
                    
                    found = true;
                    break;                    
                } 
                else if(sum < t) {
                    f++;
                } else {
                    e--;
                }
            }
        }
    }
    
    return found;
} 


void Solution(){
        
    int n;
    cin>>n;
    int t;
    cin >> t;
    
    vector<int> v(n);
    
    rep(i, 0, n) {
        cin >> v[i];    
    }
    
    bool b = GetSum(v, n, t);
    cout << "Sub Arrays : " << b << "\n";
    
    
    //Print All Sub Arrays 
    for(vector<int> vec : ans) {
        pvec(vec);
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