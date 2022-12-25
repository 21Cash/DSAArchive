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

class ListNode {
    public:
    int val;
    ListNode* next = NULL;
    
    ListNode(int _data) {
        this->val = _data;
        this->next = NULL;
    }
};


void CreateLL(ListNode* &head, int len) {
    if(len <= 0) return;
    int headVal;
    cin >> headVal;
    
    head = new ListNode(headVal);
    
    ListNode* cur = head;
    
    for(int i = 0; i < len-1; i++) {    
        int val;
        cin >> val;
        ListNode* toAdd = new ListNode(val);
        cur->next = toAdd;
        cur = toAdd;
    }
}

int GetNumber(ListNode* head) {
    int ans = 0;
    
    while(head) {
        ans = (ans * 10) + head->val;
        head = head->next;
    }
    
    return ans;
}

void AddLast(ListNode* &head, int n) {
    if(!head) {
        head = new ListNode(n);
        return;
    }
    
    ListNode* cur = head;
    while(cur->next) {
        cur = cur->next;
    }
    
    cur->next = new ListNode(n);
}

ListNode* Reverse(ListNode* head) {
    ListNode* cur = head;
    ListNode* prev = nullptr;
    ListNode* nxt = nullptr;
    
    while(cur) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

ListNode* GetLL(int n) {
    ListNode* head = nullptr;
    
    while(n != 0) {
        int lastDigit = n % 10;
        AddLast(head, lastDigit);
        n /= 10;
    }
    
    head = Reverse(head);
    return head;
}

void PrintLL(ListNode* head) {
    if(!head) return;
    while(head) {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << '\n';
}


void Solution(){
    
    int n, m;
    cin >> n >> m;
    
    ListNode* head1 = nullptr;
    ListNode* head2 = nullptr;
    
    CreateLL(head1, n);
    CreateLL(head2, m);
    
    int n1 = GetNumber(head1);
    int n2 = GetNumber(head2);
    int sum = n1 + n2;
    
    ListNode* ansHead = GetLL(sum);
    PrintLL(ansHead);
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