#include <bits/stdc++.h>
#include <sstream>
using namespace std;

using namespace std;

void ReadFile(string &str) {
	std::ifstream t("input.txt");
	std::stringstream buffer;
	buffer << t.rdbuf();
	str = buffer.str();
}

void FindAndReplace(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}



int getElementCount(string &str) {
	
	int cnt = 1;
	for(char c : str) {
		if(c == ',') {
			cnt++;
		}
	}
	return cnt;
}


void Format(string &str) {
	
	int cnt = getElementCount(str);
	
	FindAndReplace(str, " ", "");
	FindAndReplace(str, "[", "");
	FindAndReplace(str, "]", "");
	FindAndReplace(str, " ", "");
	FindAndReplace(str, ",", " ");
	
	cout << cnt << "\n";
	cout << str;	
}

void Solution() {
	
	string str;
	ReadFile(str);
	
	Format(str);
	cerr << "File Formatted." << "\n";
}


signed int main(){
	
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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


/* Leetcode Array Convertor */

/* About */

/* This Converts Leetcode Styled Array Into Normal Array */

/* 
For Example:
[1,2,3,4,5]

will Get Converted Into
5 
1 2 3 4 5





*/