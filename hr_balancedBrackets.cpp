#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

unordered_map<char,int> symbols = {{'[', -1},{'(', -2},{'{', -3},{']',1},{')',2},{'}',3}};
string isBalanced(string s){
    stack<char> st;
    for(char bracket:s){
    //we read it as char bracket in s.
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()) return "YES";
    return "NO";

}
void solve() {
    string s;
    cin >> s;
    cout << isBalanced(s) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
