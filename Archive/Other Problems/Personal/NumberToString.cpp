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


vector<string> keys = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};



string answer = "";
string nums = "";

int chartoint(char s[])
{

    int i, n;
    n = 0;
    for (i = 0; isdigit(s[i]); ++i){
        n = 10 * n + (s[i] - '0');
    }
    return n; 
}
int GetInt(char c) {
    
    char arr[] = {c};
    int i = chartoint(arr);
    
    return i;
}



void CalculateAnswer() {
    ll f = GetInt(nums[0]);
    ll s = GetInt(nums[1]);
    
    // db(f);
    // db(s);
    // db(keys[f][s]);
    answer.PB(keys[f][s]);
    
    nums = "";
}

void printDigit(ll N)
{
    ll r;
  
    // Base Case
    if (N == 0) {
        return;
    }
  
    // Extract the last digit
    r = N % 10;
    
    
    // Recursive call to next
    // iteration
    printDigit(N / 10);
  
    // Print r
    nums += to_string(r);
    
    if(nums.size() >= 2) {
        CalculateAnswer();
    }

}


void Solution(){
		
	ll n;
    cin >> n;
    printDigit(n);
    
    db(answer);
	
	
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
	
	while(t--){
		Solution();
	}
	return 0;
}