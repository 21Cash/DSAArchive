#include <bits/stdc++.h>
using namespace std;



int lengthOfLongestSubstring(string str) {
    if(str.size() <= 1) return str.size();
    unordered_set<char> s;
    int i = 0, j = 0, n = str.size();
    int ans = 0;
    while(i < n && j < n) {
        if(!s.count(str[j])) {
            s.insert(str[j++]);
        }    
        else {
            s.erase(str[i++]);
        }
        int curLen = s.size();
        cout << str.substr(i, j) << ", " ; 
        cout << "j : " << (j) << ", i : " << i << ", j - i : "<< (j - i) << endl;
        ans = max(ans, curLen);
    }
    return ans;
}


void Solution(){
	
	string str;
	cin >> str;
	cout << lengthOfLongestSubstring(str);	
	
}



// Driver Code {

signed int main(){
	
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
	
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