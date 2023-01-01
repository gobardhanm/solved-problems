#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back

void solve() {
     map<int, multiset<string>> marks_map;
     int n;
     cin >> n;
     forn{
         int marks;
         string name;
         cin >> name >> marks;
         marks_map[-1*marks].insert(name);
     }
     for(auto &marks_students_pr : marks_map){
         auto &students =marks_students_pr.second;
         int marks = marks_students_pr.first;
         for (auto student : students){
             cout << student << " " << -1*marks << endl;
         }
        
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
