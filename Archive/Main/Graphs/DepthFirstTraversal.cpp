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

void CreateGraph(vector<vector<int>> &adj, int len, int edges) {
    rep(i, 0, edges) {
        int f, s;
        cin >> f >> s;
        adj[f].PB(s);
        adj[s].PB(f);
    }
}

void Traverse(vector<vector<int>> adj, vector<int> &visited, int cur = 0) {
    
    cout << cur << " ";
    visited[cur] = 1;
    for(int i : adj[cur]) {
        if(visited[i] == 0) {
            Traverse(adj, visited, i);
        }
    }
    
}

void Solution() {

    int n;
    cin >> n;
    int e;
    cin >> e;
    
    vector<vector<int>> adj(n);
    
    CreateGraph(adj, n, e);
    
    
    vector<int> visited(n, 0);
    Traverse(adj, visited);
    cout << "\n";
    
}


signed int main() {

#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    //cin >> t;
    while (t--) {
        Solution();
    }
    return 0;
}

/* Sample Test Cases */ 

/*

Case #1:
7 6
0 4
0 3
0 2
0 1
1 5
5 6

*/
