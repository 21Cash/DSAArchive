#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef long long ll;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#ifndef ONLINE_JUDGE
#define debug(x) cout<<#x<<" : "<<x<<endl;
#define pvec(v) ;rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<endl;
#else
#define pvec(v) cout<<"[";rep(x, 0, v.size()){cout<<v[x];if(x<v.size()-1)cout<<" ";}cout<<"]"<<endl;
#define debug(x)
#endif
#define getVal(c) (c-'a'+1)

const int N = 0;

class Node {
    public:
    int data;
    Node* next;
  
    Node(int _data) {
        this -> data = _data;
        this -> next = NULL;
    }
    
};

class MyLL {
    private:
    int length = 0;
    
    public:
    Node* head;
    
    
    public:
    //Constructor
    MyLL(int headVal) {
        Node* _head = new Node(headVal);
        this -> head = _head;
        length = 1;
    }  
    
    
    public:
    
    int size() {
        return length;
    }    
    
    void InsertAtEnd(int val) {
        
        
        Node* node = new Node(val);
        
        
        Node* temp =  head;
        //Find Last Node 
        while(temp->next != NULL) {
            temp = temp->next;
        }
        
        temp->next = node;
        length++;
    }
    
    void DeleteAtEnd() {
        if(length <= 0) {
            cout<<"LL Is Empty, Cant delete End Node." << "\n";
        }
        if(length == 1) {
            this->head = NULL;
            length = 0;
            return;
        }
        
        Node *temp = head;
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
        length--;
    }
    
    Node* GetNode(int i) {
        Node* temp = head;
        int t = 0;
        while(t < i) {
            temp = temp->next;
            t++;
        }
        cout<<"Returned : " << temp->data << "\n";
        return temp;
    }
    
    //TODO : Complete This Buggy Method
    void InsertAtIndex(int i, int val) {
        Node* toAdd = new  Node(val);
        if(i == 0) {
            toAdd->next = head;
            head = toAdd;
            length++;
            return;
        }
        if(i == length) {
            InsertAtEnd(val);
            length++;
            return;
        }
        
        
        
        Node* temp = GetNode(i-1);
        
        Node* ref = temp->next;
        
        temp->next = toAdd;
        toAdd->next = ref;
        
        length++;
        cout<<"Elment " << val << " Inserted At Index " << i << "\n";
        
    }
    
    
    
    void PrintLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->data << " ";
            temp = temp->next;
        }
        
        cout << "\n";
        
    }
    
    
        


};




void Solution(){
        
   
   
}


signed int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t = 1;
    
    while(t--){
        Solution();
    }
    return 0;
}   