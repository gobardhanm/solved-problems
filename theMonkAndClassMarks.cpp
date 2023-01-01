#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     map<int, set<string>> marks_map;
     int n;
     cin >> n;
     forn{
         int marks;
         string name;
         cin >> name >> marks;
         marks_map[marks].insert(name);
     }
     auto cur_it =  --marks_map.end();
     while(true){
         auto &students = (*cur_it).second;
         int marks = (*cur_it).first;
         for (auto student : students){
             cout << student << " " << marks << endl;
         }
         if(cur_it == marks_map.begin()) break;
         cur_it--;
     }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    /* cin >> tc; */
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
