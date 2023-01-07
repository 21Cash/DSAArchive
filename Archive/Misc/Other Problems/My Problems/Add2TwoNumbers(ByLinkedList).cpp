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

    void AddToList(ListNode* &head, ListNode* &end,  int toAdd) {
        cerr << "Added: " << toAdd << "\n";
        ListNode* node = new ListNode(toAdd);
        if(!head) {
            head = node;
            end = head;
            return;
        }
        end->next = node;
        end = end->next;

    }

ListNode* GetLst(ListNode* l1, ListNode* l2) {
    
    ListNode* head = nullptr;
    ListNode* end = nullptr;
    int carry = 0;

    while(l1 || l2 || carry) {
        int sum = (l1 ? (l1->val) : 0) + (l2 ? l2->val : 0)+ carry;
        
        
        int digit = sum % 10;
        AddToList(head, end, digit);
        carry = sum / 10;
        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
        
    return head;
} 

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // l1 = Reverse(l1);
        // l2 = Reverse(l2);

        ListNode* ans = GetLst(l1, l2);
        
        return ans;
    }
    
    
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


void Solution(){
       
    int len1, len2;
    cin >> len1 >> len2;
        
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    
    
    
    CreateLL(l1, len1);
    CreateLL(l2, len2);
    
    //Reverse The Lists
    l1 = Reverse(l1);
    l2 = Reverse(l2);
    
    
    
    ListNode* ans = addTwoNumbers(l1, l2);

    // Reverse 
    ans = Reverse(ans);

    PrintLL(ans);
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

https://leetcode.com/problems/add-two-numbers/

*/

/* Complexities

Time Complexity : O(N)

Space Complexity : O(1)

*/


/*    Sample Testcases

Case #1:
3 2
1 4 9
2 3

Case #2:


Case #3:


*/