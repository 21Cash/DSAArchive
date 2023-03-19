#include <bits/stdc++.h>
using namespace std;



class ListNode {
    public:
    int val;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    
    ListNode(int _data, ListNode* prev = nullptr) {
        this->val = _data;
        this->next = NULL;
        this->prev = prev;
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

void printPrev(ListNode* head) {
	while(head) {
		if(head->prev == nullptr) {
			cout << "-1 ";
		}
		else {
			cout << head->prev->val << " ";
		}
		head = head->next;
	}
	cout << "\n";
}

void addAtEnd(ListNode* &head, ListNode* &tail, ListNode* toAdd) {
	
	if(!head) { 
		head = toAdd;
		head->prev = nullptr;
		tail = head;
		return;
	}
	
	tail->next = toAdd;
	toAdd->prev = tail;
	toAdd->next = nullptr;
	tail = tail->next;
}

ListNode* reverseList(ListNode* head) {
	if(!head) return head;
	ListNode* cur = head;
	ListNode* previous = nullptr;
	while(cur) {
		
		ListNode* nxt = cur->next;
		cur->next = cur->prev;
		cur->prev = nxt;
		previous = cur;
		cur = nxt;
	}
	return previous;
}

ListNode* getList(int n) {
	
	if(n <= 0) return nullptr;
	
	ListNode* head = nullptr;
	ListNode* tail = nullptr;
	for(int i = 0; i < n; i++) {
		int value;
		cin >> value;
		ListNode* toAdd = new ListNode(value);
		addAtEnd(head, tail, toAdd);
	}
	return head;
}



void Solution(){
	
	int n; cin >> n;
	ListNode* head = getList(n); 
	
	head = reverseList(head);
	
	PrintLL(head);
	printPrev(head);
}



// Driver Code {

signed int main(){
	
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
	
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t = 1;
	//cin >> t;
	while(t--){
		Solution();
	}
	return 0;
}

// }


/* LeetCode Link



*/