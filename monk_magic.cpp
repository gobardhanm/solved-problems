#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)

void solve() {
    int n, k;
    cin >> n >> k;

    multiset<ll> bags;
    for(int i=0; i<n; ++i){
        ll nt;
        cin >> nt;
        bags.insert(nt);
    }
    ll ans=0;
    for(int i=0; i< k; ++i ){
        auto last_it = (--bags.end());
        ll nt =+ *last_it;
        ans += nt;
        bags.erase(last_it);
        bags.insert(nt/2) ;
    }
   cout << ans << endl;
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
