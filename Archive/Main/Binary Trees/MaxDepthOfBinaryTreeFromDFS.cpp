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

class Node {
    public:
    int data;
    Node* L = NULL;
    Node* R = NULL;
    
    Node(int _data) {
        this->data = _data;
        this->L = NULL;
        this->R = NULL;
    }
};

//Creates BST From Level Order (BFS)
Node* CreateTree(Node* root) {
    int rootVal;
    cin >> rootVal;
    root = new Node(rootVal);
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
    
        Node* cur = q.front();
        q.pop();
        
        int l;
        cin >> l;
        
        if (l != -1) {
            cur->L = new Node(l);
            q.push(cur->L);
        }
        
        int r;
        cin >> r;
        if (r != -1) {
            cur->R = new Node(r);
            q.push(cur->R);
        }
        
    }
    
    return root;
}

// Finding Max Depth From DFS
void GetDepth(Node* root, int i, int &maxDepth) {
	
	if(!root) {
		maxDepth = max(maxDepth, i);
		return;
	}
	
	GetDepth(root->L, i+1, maxDepth);
	i--;
	GetDepth(root->R, i+1, maxDepth);
	i--;
	
}


void Solution(){
		
	Node* root = NULL;
	root = CreateTree(root);
	
	int maxDepth = 0;
	
	GetDepth(root, 0, maxDepth);
	
	db(maxDepth);
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
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



/* Complexities

Time Complexity : O(N)

Space Complexity : O(N)

*/


/*	Sample Inputs

Case #1:
1
2 3
4 5 6 7
-1 -1 -1 -1 -1 -1 -1 -1 


Case #2:
3
9 20
-1 -1 15 7
-1 -1 -1 -1

Case #3:
1
2 3
4 5 -1 -1 
-1 -1 6 -1
-1 -1 


*/

/* LeetCode Link

https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/846890881/

*/