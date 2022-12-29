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
void PrintLL(ListNode* head) {
    if(!head) return;
    while(head) {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << '\n';
}

ListNode* RemoveFromEnd(ListNode* head, int n) {
    
    ListNode* fast = head;
    ListNode* slow = head;
    
    rep(i, 0, n) {
        if(!fast->next) {
            
            // Delete First Node
            return slow->next;   
        }
        else {
            fast = fast->next;
        }
    }
    while(fast->next) {
        fast = fast->next;
        slow = slow->next;
    }
    
    ListNode* toDel = slow->next;
    ListNode* toConnect = slow->next->next;
    // delete toDel;
    slow->next = toConnect;
    
    return head;
}

void Solution(){
        
    int len, n;
    cin >> len >> n;
    
    ListNode* head;
    CreateLL(head, len);
    
    head = RemoveFromEnd(head, n);
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

/* Complexities

Time Complexity : O(N)

Space Complexity : O(1)

*/


/* LeetCode Link

https://leetcode.com/problems/remove-nth-node-from-end-of-list/

*/



/*    Sample Testcases

Case #1:
6 6
1 2 3 4 5 6

Case #2:
6 2
1 2 3 4 5 6

Case #3:
6 1
1 2 3 4 5 6

*/

