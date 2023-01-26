#include <bits/stdc++.h>
using namespace std;



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
    if(rootVal == -1) return nullptr;
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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    
    vector<vector<int>> ans;
    if(!root) return ans;
    
    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr);
    
    vector<int> v;
    bool rev = false;
    
    while(!q.empty()) {
        
        TreeNode* cur = q.front();
        q.pop();
        
        if(!cur) {
            if(rev) {
                reverse(v.begin(), v.end());
            }
            ans.push_back(v);
            v.clear();
            if(!q.empty()) {
                q.push(nullptr);
            }
            rev = !rev;
        }
        else {
            
            v.push_back(cur->val);
            if(cur->left) {
                q.push(cur->left);
            }
            if(cur->right) {
                q.push(cur->right);
            }
        }
        
        
    }
    return ans;
}






void Solution(){
        
    TreeNode* root = CreateTree();
    
    vector<vector<int>> ans = zigzagLevelOrder(root);
    
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
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

/* LeetCode Link

https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

*/