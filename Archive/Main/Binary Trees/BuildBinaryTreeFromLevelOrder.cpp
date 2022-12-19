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


void LevelOrderTraversal(Node* root) {
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()) {
        
        Node* ref = q.front();
        
        if(ref)
            cout << ref->data << " ";
        q.pop();
        
        if(ref == NULL) {
            //New Level So Break Line
            cout << "\n";
            
            //If Queue isnt Empty, Then Push NULL Beacause The Level Has Completely Traversed
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            
            if(ref->L) {
                q.push(ref->L);
            }
            if(ref->R) {
                q.push(ref->R);
            }
            
        }    
    }
}



void BuildTreeFromLevelOrder(Node* &root) {
    
    cout << "Enter Root Data : " << endl;
    int rootData;
    cin >> rootData;
    
    root = new Node(rootData);
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        
        Node* ref = q.front();
        
        q.pop();
        
        cout << "Enter Data For Left Of : " << ref->data << endl;
        int lData;
        cin >> lData;
        
        if(lData != -1) {
            Node* lNode = new Node(lData);
            ref->L = lNode;
            q.push(lNode);
        } else{
            ref->L = NULL;
        }
        
        cout << "Enter Data For Right Of : " << ref->data << endl;
        int rData;
        cin >> rData;
        
        if(rData != -1) {
            Node* rNode = new Node(rData);
            ref->R = rNode;
            q.push(rNode);
        } else {
            ref->R = NULL;
        }
        
    }
    
    
}



void Solution(){
        
    Node* root = NULL;
    
    BuildTreeFromLevelOrder(root);
    
    cout << "Printing Tree : " << endl;
    
    LevelOrderTraversal(root);
    
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
Sample Inputs 

Sample #1:
1 2 3 -1 -1 -1 -1

Sample #2:1
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

*/