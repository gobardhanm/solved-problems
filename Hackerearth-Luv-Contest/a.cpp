//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define fori for(int i= 0; i<n; ++i)
#define forj for(int j=0; j< n; ++j)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: CapitalBaazi

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int len = sizeof(s);
    for(int i= 0 ; i< len; ++i){
        if((int)s[i] != 32){
            s[i] += 32;
            cout << s[i];
        }else{
            cout << nline;
        }
    }
}
