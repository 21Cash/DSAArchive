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



ListNode* CreateLL(ListNode* head, int len) {
    
    int headVal;
    cin >> headVal;

    head = new ListNode(headVal);
    
    ListNode* ref = head;
    
    int i = 0;
    while(i < len-1) {
        int t;
        cin >> t;
        ListNode* toAdd = new ListNode(t);
        head->next = toAdd;
        head = toAdd;
        i++;
    }
    return ref;
}

void PrintLL(ListNode* head) {
    if(!head) return;
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << '\n';
}

ListNode* Reverse(ListNode* head) {
    ListNode* cur = head;
    ListNode* prev = nullptr;
    
    while(cur) {
        ListNode* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

void AddToList(ListNode* &head, int val) {
    if(!head) {
        head = new ListNode(val);
        return;
    }
    ListNode* cur = head;
    while(cur->next) {
        cur = cur->next;
    }
    
    ListNode* toAdd = new ListNode(val);
    cur->next = toAdd;
    
}

ListNode* Add(ListNode* head1, ListNode* head2) {
    
    ListNode* ans = nullptr;
    
    //Reverse l1 and l2
    head1 = Reverse(head1);
    head2 = Reverse(head2);
    
    ListNode* f = head1;
    ListNode* s = head2;
    
    int carry = 0;
    while(f || s || carry != 0) {
        
        
        int sum = carry + (f ? f->val : 0) + (s ? s->val : 0);
        
        int digit = sum % 10;
        AddToList(ans, digit);
        carry = sum / 10;
        
        
        if(f)
            f = f->next;
        if(s)
            s = s->next;
    }
    
    ans = Reverse(ans);
    return ans;
}


void Solution(){
        
    int len1, len2;
    cin >> len1 >> len2;
    
    ListNode* head1 = nullptr;
    ListNode* head2 = nullptr;
    
    head1 = CreateLL(head1, len1);
    head2 = CreateLL(head2, len2);
    
    ListNode* ans = Add(head1, head2);
    
    PrintLL(ans);
}


signed int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
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

https://leetcode.com/problems/add-two-numbers/

*/

/*    Sample Testcases

Case #1:
2 3
4 5
3 4 5

Case #2:
3 3 
1 1 1
2 0 2

Case #3:


*/