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

int rows;
int cols;


vector<string> ans;

bool CanMove(pi pos, vector<vector<int>> &visited, vector<vector<int>> &inp) {
    if(pos.F >= 0 && pos.S >= 0 && pos.F < rows && pos.S < cols && visited[pos.F][pos.S] == 0 && inp[pos.F][pos.S] == 1) {
        return true;
    }
    
    return false;
}


void Solve(vector<vector<int>> &inp, pi s, pi cur, pi e, vector<vector<int>> &visited, int i = 0, string tAns = "") {
    if(inp[s.F][s.S] == 0) return;  
    if(cur == e) {
        ans.PB(tAns);
        return;
    }
    
    visited[cur.F][cur.S] = 1;
    //Down Call
    if(CanMove(MP(cur.F+1, cur.S), visited, inp)) {
        Solve(inp, s, MP(cur.F+1, cur.S), e, visited, i+1, tAns+"D");
        // cout << "R" << "\n";
    }
    
    //Left Call
    if(CanMove(MP(cur.F, cur.S-1), visited, inp)) {
        Solve(inp, s, MP(cur.F, cur.S-1), e, visited, i+1, tAns+"L");
        // cout << "L" << "\n";s
        
    }
    //Right Call
    if(CanMove(MP(cur.F, cur.S+1), visited, inp)) {
        Solve(inp, s, MP(cur.F, cur.S+1), e, visited, i+1, tAns+"R");
        // cout << "R" << "\n";
        
    }
    //Up Call
    if(CanMove(MP(cur.F-1, cur.S), visited, inp)) {
        Solve(inp, s, MP(cur.F-1, cur.S), e, visited, i+1, tAns+"U");
        // cout << "U" << "\n";
        
    }
    
    visited[cur.F][cur.S] = 0;
    
}



void Solution(){
    
    cin >> rows >> cols;
    
    vector<vector<int>> inp(rows, vector<int>(cols));
    
    rep(i, 0, rows) {
        rep(j, 0, cols) {
            cin >> inp[i][j];
        }
    }
    
    vector<vector<int>> visited(rows, vector<int>(cols));
    
    cout << "INPUT : " << "\n";
    
    rep(i, 0, rows) {
        rep(j, 0, cols) {
            cout << inp[i][j] << " ";
        } 
        cout << "\n";
    }
    Solve(inp, MP(0, 0), MP(0, 0), MP(rows-1, cols-1), visited);
    
    for(string s : ans) {
        cout << s << "\n";
    }
    
}


signed int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    #endif
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    
    while(t--){
        Solution();
    }
    return 0;
}