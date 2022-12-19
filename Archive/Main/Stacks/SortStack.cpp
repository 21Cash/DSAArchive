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

void PrintStack(stack<int> &s) {
    if(s.empty()) {
        cout << "\n";
        return;
    }

    int ref = s.top();
    cout << ref << " ";
    s.pop();
    PrintStack(s);
    s.push(ref);
}


  

void Place(stack<int> &s, int n) {
    if(s.empty() || s.top() > n) {
        s.push(n);
        return;
    }
    
    int ref = s.top();
    s.pop();
    Place(s, n);
    s.push(ref);
    
    
}




void Sort(stack<int> &s) {
    if(s.empty()) {
        return;
    }    
    
    int ref = s.top();
    s.pop();
    Sort(s);
    Place(s, ref);
      
}



void Solution(){
        
    stack<int> s;
    s.push(9);
    s.push(3);
    s.push(2);
    s.push(11);
    
    
    
    PrintStack(s);

    Sort(s);
    
    PrintStack(s);
        
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