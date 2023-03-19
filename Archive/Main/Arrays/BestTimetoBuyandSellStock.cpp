#include <bits/stdc++.h>
using namespace std;


vector<int> InputVector(int n) {
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	return v;
}

int maxProfit(vector<int>& prices) {
    
    int lowest = prices[0];
    int n = prices.size();
    int profit = 0;
    for(int i = 0; i < n; i++) {
    	
    	lowest = min(lowest, prices[i]);
    	
    	profit = max(profit, prices[i] - lowest);
    	
    }
    
    return profit;
}

void Solution(){
	
	int n;
	cin >> n;
	vector<int> prices = InputVector(n);
	
	cout << maxProfit(prices);
	
	
}

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