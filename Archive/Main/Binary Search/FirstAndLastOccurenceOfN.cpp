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


pi GetFirstAndLastOccurence(vector<int> &v, int n) {
    
    pi ans = MP(-1, -1);
    
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    
    while(s <= e) {
        
        if(v[mid] == n) {
            
            
            //Found n
            int t = mid;
            
            while(v[t-1] == n) {
                t--;
            }
            ans.F = t;
            
            t = mid;
            
            while(v[t+1] == n) {
                t++;
            }
            
            ans.S = t;
            return ans;
        }
        
        else if(v[mid] < n) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
        
        mid = s + (e-s) / 2;
    }
    
    return ans;
}


void Solution(){
        
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector<int> v(n);
    
    rep(i, 0, n) {
        cin >> v[i];
    }
        
    
    pi ans = GetFirstAndLastOccurence(v, k);
    
    cout << ans.F << " " << ans.S << endl;
    
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


/*
Sample Inputs

Sample #1:
5 4
1 4 4 4 4 1

Sample #2:
6 2
1 2 2 2 9 8

*/