#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    int n; int x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, sum = 0;
    for(int l = 0, r = 0; r < n; r++) {
        sum += a[r];
        while(sum > x) {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans;
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