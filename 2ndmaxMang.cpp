#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
set <int> s; vector <int> v;

void solve() {
    int dem = 0;
    int n;
    cin >> n;
    if(n < 2) {
        cout << "NOT FOUND";
    } else {
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        for(auto tmp : s) {
            v.push_back(tmp);
            dem++;
        }
        if(dem > 1) {
            sort(v.begin(), v.end(), greater<int>());
            cout << v[1];
        } else {
            cout << "NOT FOUND";
        }
    }
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    solve();
}