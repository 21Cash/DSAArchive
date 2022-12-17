
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

Node* CreateLL(Node* head) {
	
	int n;
	cin >> n;
	
	int headVal;
	cin >> headVal;

	head = new Node(headVal);
	
	Node* ref = head;
	
	int i = 0;
	while(i < n-1) {
		int t;
		cin >> t;
		Node* toAdd = new Node(t);
		head->next = toAdd;
		head = toAdd;
		i++;
	}
	return ref;
}

void PrintLL(Node* head) {
	while(head) {
		cout << head->data << " ";
		head = head->next;
	}
}

void CreateList(Node* head, vector<int> &lst) {
	
	while(head) {
		lst.PB(head->data);
		head = head->next;
	}
}

Node* ReverseLst(Node* head) {
	
	Node* prev = nullptr;
	Node* cur = head;
	
	while(cur) {
		Node* ref = cur->next;
		cur->next = prev;	
		prev = cur;
		cur = ref;
	}
	return prev;
}

int GetInt(vector<int> &lst) {
	int ans = 0;
	for(int i : lst) {
		ans = ans * 10 + i;
	}
	return ans;
}

int GetSum(vector<int> &lst1, vector<int> &lst2) {
	if(sz(lst1) == 0 && sz(lst2) == 0) return 0;
	
	int n1 = GetInt(lst1);
	int n2 = GetInt(lst2);
	
	return n1 + n2;
	
}

void Solution() {

	Node* head1 = NULL;
	Node* head2 = NULL;
	
	head1 = CreateLL(head1);
	head2 = CreateLL(head2);
	
	head1 = ReverseLst(head1);
	head2 = ReverseLst(head2);
	
	vector<int> lst1;
	vector<int> lst2;
	
	CreateList(head1, lst1);
	CreateList(head2, lst2);
	
	int ans = GetSum(lst1, lst2);
	cout << ans << "\n";
}


signed int main() {

#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// freopen("error.txt", "w", stderr);
#endif

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t = 1;
	//cin >> t;
	while (t--) {
		Solution();
	}
	return 0;
}

/* LeetCode Link

https://leetcode.com/problems/add-two-numbers/

*/

/*	Sample Inputs

Case #1:
3
2 4 3
3
5 6 4

*/