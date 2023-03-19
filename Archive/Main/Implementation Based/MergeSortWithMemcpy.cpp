#include <bits/stdc++.h>
using namespace std;



void merge(int* arr, int M, int L, int R) {
    
    int len1 = M - L + 1, len2 = R - M;
    
    int arr1[len1], arr2[len2];
    
    int k = L;
   
    
    memcpy(arr1, &arr[L], len1* sizeof(arr[0]));
    memcpy(arr2, &arr[M+1], len2 * sizeof(arr[0]));
    
    int f = 0, s = 0;
    k = L;
    while(f < len1 || s < len2) {
        
        if(s >= len2 || arr1[f] < arr2[s]) {
            arr[k++] = arr1[f++];
        }
        else {
            arr[k++] = arr2[s++]; 
        }
        
    } 
}

void mergeSort(int* arr, int L, int R) {
    
    if(L >= R) {
        return;
    }
    
    
    int m = L + (R - L) / 2;
    mergeSort(arr, L, m);
    mergeSort(arr, m+1, R);
    
    merge(arr, m, L, R);
}


void Solution(){
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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