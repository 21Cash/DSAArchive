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

class MyStack {
	
	public:
		
	void push(int n) {
		arr[front] = n;
		front++;	
		size++;
	}
	
	void pop() {
		if(isEmpty()) return;
		size--;
		front--;
	}
	
	int getSize() {
		return size;
	}
	
	int top() {
		if(isEmpty()) return -1;
		return arr[front-1];
	}
	
	bool isEmpty() {
		return front == 0;
	}
	
	private:
	int front = 0;
	int arr[10000];
	int size = 0;
	
	
};

void Solution(){
		
	MyStack s;
	
	s.push(1);
	s.push(2);
	
	cout << s.top() << "\n";
	
	s.pop();
	
	cout << s.top();	
		
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