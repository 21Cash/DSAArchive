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



// Stack -> Last In First Out
// Queue -> First In First Out

class MyQueue {
	
	public:
	void push(int n);
	void pop();
	int top();
	bool empty();
	int getSize();
		
	
	private:
	stack<int> s1;
	stack<int> s2;
	int size = 0;
	
};

// Time : O(1), Space  : O(1)
void MyQueue::push(int x) {
	
	s1.push(x);
	size++;
}

// Time : O(1) (For The Most part), Space : O(1)
void MyQueue::pop() {
	if(s2.empty()) {
		
		// Copy S1 to s2
		while(!s1.empty()) {
			int ref = s1.top();
			s1.pop();
			s2.push(ref);
		}
	}
	s2.pop();
	size--;
}

// Time : O(1) (For The Most part), Space : O(1)
int MyQueue::top() {
	
	if(s2.empty()) {
		
		// Copy S1 to s2
		while(!s1.empty()) {
			int ref = s1.top();
			s1.pop();
			s2.push(ref);
		}
		return s2.top();
	}
	else {
		return s2.top();
	}
}





void Solution(){
	
	MyQueue q;
	q.push(1);
	q.push(2);
	q.push(3);
	
	q.pop();
	cout << q.top();	

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

