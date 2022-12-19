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
    Node* next = NULL;
    
    Node(int _data) {
        this->data = _data;
        this->next = NULL;
    }
};

class LL{
    
    public:
    Node* head;
    
    LL() {
        head = NULL;
    }
    
    void Add(int n) {
        if(!head) {
            head = new Node(n);
            return;
        }    
        Node* t = head;
        while(t->next) {
            t = t->next;
        }
        Node* toAdd = new Node(n);
        t->next = toAdd;
    }
    
};



void PrintLL(Node* head) {
    if(head == NULL) {
    }
    
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

void AddNode(Node* head, int n) {
    while(head->next) {
        head = head->next;
    }
    head->next = new Node(n);
}

Node* MergeLst(Node* lst1, Node* lst2) {
    
    Node* cur = NULL;
    
    
    
    
    if(lst1->data <= lst2->data) {
        cur = new Node(lst1->data);
        lst1 = lst1->next;
    } else {
        cur = new Node(lst2->data);
        lst2 = lst2->next;
    }
    
    Node* ref = cur;
    
    while(lst1 || lst2) {
        if(lst1 && lst1->data <= lst2->data) {
            AddNode(cur, lst1->data);
            lst1 = lst1->next;
        }
        else if(lst2) {
            AddNode(cur, lst2->data);
            lst2 = lst2->next;
        }
    }
    
    
    
    return ref;
}




void Solution(){
    
    int len1, len2;
    
    cin >> len1 >> len2;
    
    
    
    LL lst1;
    LL lst2;
    
    
    rep(i, 0, len1) {
        int t;
        cin >> t;
        
        
        lst1.Add(t);
        
    }
      
      
    rep(i, 0, len2) {
        int t;
        cin >> t;
        lst2.Add(t);
        
    }
    
    
    Node* head = MergeLst(lst1.head, lst2.head);
    
    PrintLL(head);
    
    
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

/* Sample Inputs

Case #1:
4 5
1 2 4 5
2 2 3 6 7 

Case #2:
2 1
1 6
9

*/