
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

#include <bits/stdc++.h>
using namespace std;


class MinStack {
	
	public:
	void push(int n);
	void pop();
	int getMin();
	int top();
	bool empty();
	
	private:
	int arr[1000];
	int front = 0;
	int mini = INT_MAX;
};

int MinStack::getMin() {
	return mini;
}

bool MinStack::empty() {
	return front == 0;
}

void MinStack::push(int n) {
	
	if(this->empty()) {
		arr[front] = n;
		mini = n;
		front++;
		return;
	}
	
	if(n < mini) {
		arr[front] = 2 * n - mini;
		mini = n;
	}
	else {
		arr[front] = n;
	}
	front++;
}

int MinStack::top() {
	
	int topVal = arr[front-1];
	if(topVal <  mini) {
		return mini;
	}
	return topVal;
	
}

void MinStack::pop() {
	
	if(this->top() < mini) {
		int val = 2 * mini - this->top();
		mini;
	}
	front--;
}







void PrintStack(MinStack &s) {
	if(s.empty()) {
		cout << "\n";
		return;
	}
	
	cout << s.top() << " ";
	int ref = s.top();
	s.pop();
	PrintStack(s);
	s.push(ref);
}


void Solution(){
		
	MinStack s;
	
	s.push(1);
	s.push(7);
	s.push(9);
	s.push(0);
	s.pop();
	PrintStack(s);
	cout << s.getMin();
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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
