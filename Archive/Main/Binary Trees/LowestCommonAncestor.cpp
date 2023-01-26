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

class TreeNode {
    public:
    int val;
    TreeNode* left = NULL;
    TreeNode* right = NULL;
    
    TreeNode(int _data) {
        this->val = _data;
        this->left = NULL;
        this->right = NULL;
    }
};

//Creates BST From Level Order (BFS)
TreeNode* CreateTree() {
    int rootVal;
    cin >> rootVal;
    TreeNode* root = new TreeNode(rootVal);
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
    
        TreeNode* cur = q.front();
        q.pop();
        
        int l;
        cin >> l;
        
        if (l != -1) {
            cur->left = new TreeNode(l);
            q.push(cur->left);
        }
        
        int r;
        cin >> r;
        if (r != -1) {
            cur->right = new TreeNode(r);
            q.push(cur->right);
        }
        
    }
    
    return root;
}
//Prints BST In Level Order Traversal (BFS)
void PrintTree(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        
        TreeNode* ref = q.front();
        if(ref)
            cout << ref->val << " ";
        q.pop();
        
        if(ref != NULL) {
            if(ref->left) {
                q.push(ref->left);
            }
            if(ref->right) {
                q.push(ref->right);
            }
        } 
        else {
            cout << "\n";
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        
        
    }
    
}

TreeNode* lowestCommonAncestor(TreeNode* root,int node1, int node2) {
    if(!root) return root;
    if(root->val == node1 || root->val == node2) {
        return root;
    }
    
    TreeNode* left = lowestCommonAncestor(root->left, node1, node2);
    TreeNode* right = lowestCommonAncestor(root->right, node1, node2);
    
    
    if(left && right) return root;
    if(left && !right) return left;
    if(!left && right) return right;
    if(!left && !right) return nullptr;            
}



void Solution(){
        
    int n1, n2;
    cin >> n1 >> n2;
    
    TreeNode* root = CreateTree();
    
    
    TreeNode* lca = lowestCommonAncestor(root, n1, n2);
    
    if(lca)
        cout << lca->val;
    else
        cout << "nullptr";
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

https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

*/