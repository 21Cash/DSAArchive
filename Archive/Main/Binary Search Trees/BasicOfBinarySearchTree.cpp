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

int getSmallestValueInBST(TreeNode* root) {
    
    if(!root->left) return root->val;
    
    if(root->left) {
        return getSmallestValueInBST(root->left);
    }
    
}

int getLargestValueInBST(TreeNode* root) {
    
    if(!root->right) return root->val;
    
    if(root->right) {
        return getLargestValueInBST(root->right);
    }
} 



bool isPresentInTree(TreeNode* root, int x) {
    
    if(!root) return false;
    
    if(root->val == x) return true;
    
    if(root->val < x) {
        return isPresentInTree(root->right, x);
    }
    else {
        return isPresentInTree(root->left, x);
    }
    
}

TreeNode* insertIntoBST(TreeNode* root, int x) {
    
    if(!root) {
        root = new TreeNode(x);
        return root;
    }
    
    if(root->val < x) {
        root->right = insertIntoBST(root->right, x);
    }
    else {
        root->left = insertIntoBST(root->left, x);
    }
}

TreeNode* CreateBST() {
    
    int x = 0;
    TreeNode* root = nullptr;
    
    cin >> x;
    while(x != -1) {
        root = insertIntoBST(root, x);
        cin >> x;
    }
    return root;
}



void Solution(){
        
    TreeNode* root = CreateBST();
    PrintTree(root);
    
    cout << "getLargestValueInBST() : " << getLargestValueInBST(root) << "\n";
    cout << "getSmallestValueInBST() : " << getSmallestValueInBST(root) << "\n";
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

    Basic Concepts Of Binary Search Trees

*/