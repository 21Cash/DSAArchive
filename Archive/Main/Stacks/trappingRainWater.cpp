#include <bits/stdc++.h>
using namespace std;


#define pvec(v) cout<<"[";for(int x=0;x<v.size();x++){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;


vector<int> prevGreaterElement(vector<int> &v) {
        
        int n = v.size();
        vector<int> prevGreater(n);
        
        stack<int> s;
        s.push(-1);
        for(int i = 0; i < n; i++) {
            while(s.top() <= v[i]) {
                if(s.top() == -1) break;
                s.pop();
            }
            prevGreater[i] = s.top();
            s.push(v[i]);
        }
        
        return prevGreater;
    }
    
    vector<int> nextGreaterElement(vector<int> &v) {
        
        int n = v.size();
        vector<int> nextGreater(n);
        
        stack<int> s;
        s.push(-1);
        
        for(int i = n - 1; i >= 0; i--) {
            while(s.top() < v[i]) {
                if(s.top() == -1) break;
                s.pop();
            }
            nextGreater[i] = s.top();
            s.push(v[i]);
        }
    
        return nextGreater;
        
    }
    
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        vector<int> prevGreater = prevGreaterElement(height);
        vector<int> nextGreater = nextGreaterElement(height);
        
        
        
        int ans = 0;
        
        for(int i = 0; i < n; i++) {
        	if(prevGreater[i] == -1 || nextGreater[i] == -1) {cout << " 0 "; continue;}
            int minVal = min(prevGreater[i], nextGreater[i]);
            int amount = minVal - height[i];
            ans += amount;
            cout << amount << " ";
        }
        cout << "\n";
        return ans;
    }



void InputVector(vector<int> &v, int n) {
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
}

void Solution(){
	
	int n;
	cin >> n;
	vector<int> inp(n);
	
	InputVector(inp, n);
	
	
	cout << trap(inp);
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