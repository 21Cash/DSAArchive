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

bool isValidBST(TreeNode* root, long minVal = LONG_MIN, long maxVal = LONG_MAX) {
    if(!root) return true;

    if(root->val >= maxVal || root->val <= minVal) {
        return false;
    }

    bool left = isValidBST(root->left, minVal, root->val);
    bool right = isValidBST(root->right, root->val, maxVal);

    return (left && right); 
}


void Solution(){
        
    TreeNode* root = CreateTree();
    
    bool valid = isValidBST(root, INT_MIN, INT_MAX);
    cout << valid; 
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

https://leetcode.com/problems/validate-binary-search-tree/

*/