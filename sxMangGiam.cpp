#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <vector>   
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void solve() {
    int n;
    cin  >> n;
    vector<int> v; 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto i : v) {
        cout << i << " ";
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