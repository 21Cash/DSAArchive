#include <bits/stdc++.h>
using namespace std;



int binarySearch(vector<int> &arr, int s, int e, int x) {
    int mid = s + (e - s) / 2;
    while(s <= e) {
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) s = mid + 1;
        else e = mid - 1;
        mid = s + (e - s) / 2; 
    }
    return -1;
}


void Solution(){
    
    
    
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