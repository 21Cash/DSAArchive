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

void PrintLL(ListNode* head) {
    if(!head) return;
    while(head) {
        cout << head->val << ' ';
        head = head->next;
    }
    cout << '\n';
}

ListNode* GetLst() {
	ListNode* head = new ListNode(1);
	ListNode* ref = head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = ref;
	return head;
}

bool hasCycle(ListNode *head) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast && fast->next) {

            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        return false;
    }


void Solution(){
	
	ListNode* head = GetLst();
	
	db(hasCycle(head));	
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