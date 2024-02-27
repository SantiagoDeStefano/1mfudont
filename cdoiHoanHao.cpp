#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = -lim;
    a[n] = a[0];
    ll x, y;
    for(ll i = n-1; i >= 0; i--) {
        ans = max(ans, a[i] + a[i+1]);
        if(ans == a[i] + a[i+1]) {
            x = a[i];
            y = a[i + 1];
        }   
    }
    cout << x << " " << y;
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