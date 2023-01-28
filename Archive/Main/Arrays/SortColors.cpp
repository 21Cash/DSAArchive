#include <bits/stdc++.h>
using namespace std;

#define pvec(v) cout<<"[";for(int x=0;x<v.size();x++){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;


const int N = 0;

vector<int> InputVector(int n) {
	vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	return v;
}

void sortColors(vector<int>& nums) {
        
    int n = nums.size();
    int j = 0;
    
    for(int i = 0; i < n; i++) {
        
        if(nums[i] == 0) {
            swap(nums[i], nums[j]);
            j++;
        }
        
    }
    for(int i = 0; i < n; i++) {
        
        if(nums[i] == 1) {
            swap(nums[i], nums[j]);
            j++;
        }
        
    }
    
    for(int i = 0; i < n; i++) {
        
        if(nums[i] == 2) {
            swap(nums[i], nums[j]);
            j++;
        }
        
    }
    
}

void Solution(){
	
	int n;
	cin >> n;
	
	vector<int> v = InputVector(n);
	
	sortColors(v);
	pvec(v);
    
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

https://leetcode.com/problems/sort-colors/

*/


/* Complexities

Time Complexity : O(N)

Space Complexity : O(1)

*/
		
