#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
int cnt[10001] = {0};

bool is_SNT(ll n) {
    if(n < 2) return false;
    for(ll i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;    
} 

void solve() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a+1, a+1+n);
    for(ll i = 1; i <= n; i++) {
        if(is_SNT(a[i]) == true && a[i] != a[i-1]) {
            cout << a[i] << " ";
        }
    }
}
int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    solve();
}