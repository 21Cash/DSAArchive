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



Node* CreateLL(Node* head, int len) {
    
    int hVal;
    cin >> hVal;
    head = new Node(hVal);
        
    Node* cur = head;
    rep(i, 0, len-1) {
        int val;
        cin >> val;
        Node* toAdd = new Node(val);
        cur->next = toAdd;
        cur = toAdd;
    }
    
    return head;
}



Node* Reverse(Node* head) {
        Node* prev = nullptr;
        Node* cur = head;

        while(cur) {
            Node* nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }

        return prev;
    }

bool isPalindrome(Node* head) {

    Node* f = head;
    Node* s = head;
    
    // Get Middle 
    while(f->next) {
        if(f->next->next) 
            f = f->next->next;
        else 
            f = f->next;

        s = s->next;
    }
    
    // Reverse From Middle
    s = Reverse(s);
    f = head;
    
    // Check 
    while(s) {
        if(s->data != f->data) {
            return false;
        }
        s = s->next;
        f = f->next;
    }

    return true;
}


void Solution(){
    
    int n;
    cin >> n;
    
    Node* head = NULL;
    
    head = CreateLL(head, n);
    
    
    cout << isPalindrome(head);
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

https://leetcode.com/problems/palindrome-linked-list/

*/

/*    Sample Testcases

Case #1:
4
1 2 2 1

Case #2:
2
1 2

Case #3:
3
1 2 1

*/