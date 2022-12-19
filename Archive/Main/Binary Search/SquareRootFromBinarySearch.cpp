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

int GetSqrt(int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s) / 2;
    ll prev = -1;
    
    while(s <= e) {
        ll val = mid * mid;
        
        if(val == n) {
            return mid;
        }  
        else if(val < n) {
            s = mid + 1;
            prev = mid;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
    }
    
    return prev;
}


double GetPreciseValue(int num, int precision, double tempSol) {
    
    double f = 1;
    
    double prev = tempSol;
    
    
    rep(i, 0, precision) {
        
        f /= 10;
        tempSol = prev;
        while(true) {
            
            tempSol += f;
            
            
            if(tempSol * tempSol > num) {
                break;
            } else {
                prev = tempSol;
            }
            
            
            
        }
        
        
    }
    
    return prev;
}


void Solution(){
        
    int n;
    cin>>n;
    
    int val = GetSqrt(n);
    double ans = GetPreciseValue(n, 5, val);
    
    cout << ans << "\n";
    
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