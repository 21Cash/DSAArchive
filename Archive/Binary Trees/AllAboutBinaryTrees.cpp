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
    Node* R = NULL;
    Node* L = NULL;
    Node(int _data) {
        this->data = _data;
        this->R = NULL;
        this->L = NULL;
    }
};


//Creates Tree Through Recursion
Node* BuildTree(Node* root) {
    
    cout << "Enter Root Val " << endl;    
    int rootVal;
    cin >> rootVal;
    
    if(rootVal == -1) {
        return NULL;
    }
    
    root = new Node(rootVal);
    
    cout << "Enter Data For left Of " << rootVal << endl;
    root->L = BuildTree(root->L);
    cout << "Enter Data For right Of " << rootVal << endl;
    root->R = BuildTree(root->R);
        
    return root;
}

//Prints BST In Level Order Traversal (BFS)
void PrintTree(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        
        Node* ref = q.front();
        if(ref)
            cout << ref->data << " ";
        q.pop();
        
        if(ref != NULL) {
            if(ref->L) {
                q.push(ref->L);
            }
            if(ref->R) {
                q.push(ref->R);
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



void DFS(Node* root) {
    cout << root->data << " ";
    if(root->L) {
        DFS(root->L);
    }
    if(root->R) {
        DFS(root->R);
    }
    
}

Node* InvertTree(Node* root) {
    
    
    if(!root) return NULL;
    // Beans 
    Node* ref = root->L;
    root->L = root->R;
    root->R = ref;
    
    root->L = InvertTree(root->L);
    root->R = InvertTree(root->R);
    return root;
    
}

void InOrderTraversal(Node* root) {
    if(!root) return;
    
    InOrderTraversal(root->L);
    cout << root->data << " ";
    InOrderTraversal(root->R);
    
}

void PreOrderTraversal(Node* root) {
    if(!root) return;
    
    cout << root->data << " ";
    PreOrderTraversal(root->L);
    PreOrderTraversal(root->R);
    
}

void PostOrderTraversal(Node* root) {
    if(!root) return;
    
    PostOrderTraversal(root->L);
    cout << "\n";
    PostOrderTraversal(root->R);
    cout << "\n";
    cout << root-> data << " ";
    cout << "\n";
    
}

// Morris Traversal (InOrder)
void InOrder(Node* root) {
    Node* cur = root;
    
    while (cur) {
        if (!cur->L) {
            cout << cur->data << " ";
            cur = cur->R;
        }
        else {
        
            Node* prev = cur->L;
            while (prev->R && prev->R != cur) {
                prev = prev->R;
            }
            
            if (prev->R == cur) {
                prev->R = NULL;
                cout << cur->data << " ";
                cur = cur->R;
            }
            else {
                prev->R = cur;
                cur = cur->L;
            }
        }
    }
    
}

// InOrder : Iteratively
void In_Order(Node* root) {
    stack<Node*> s;
    
    Node* cur = root;
    s.push(cur);
    while(!s.empty()) {
        if(cur) {
            s.push(cur);
            cur = cur->L;
        }
        else {
            
            cout << s.top()->data << " ";
            cur = s.top();
            s.pop();
            cur = cur->R;    
        }
    }
    
}

void Solution(){
        
    Node* root = NULL;
    root = CreateTree(root);
    
    InOrder(root);  
    
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