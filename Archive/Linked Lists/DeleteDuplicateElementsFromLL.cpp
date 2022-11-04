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
    
    LL(int _data) {
        Node* node = new Node(_data);
        head = node;
    }
    
    void Add(int n) {
        Node* t = head;
        while(t->next) {
            t = t->next;
        }
        Node* toAdd = new Node(n);
        t->next = toAdd;
    }
    
};

void PrintLL(Node* head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

void DeleteDuplicates(Node* head) {
    Node* cur = head;
    
    int prevVal = -1;
    Node* prevN = NULL;
    while(cur) {
        int curVal = cur->data;
        if(prevVal == curVal) {
            //Delete Node
            Node* nxt = cur->next;
            delete cur;
            prevN->next = nxt;
            cur = nxt;
        } else {
            prevVal = curVal;
            prevN = cur;
            cur = cur->next;
        }
        
    }
}


void Solution(){
        
    LL ll(1);
    ll.Add(2);
    ll.Add(3);
    ll.Add(3);
    ll.Add(4);
    ll.Add(5);
    ll.Add(5);
    
    Node* head = ll.head;
    PrintLL(head);
    DeleteDuplicates(head);
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
    
    while(t--){
        Solution();
    }
    return 0;
}