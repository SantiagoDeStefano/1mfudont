#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void tinhMean() {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll tong = 0; ll dem = 0;
    for(ll i = 0; i < n; i++) {
       if(abs(a[i] % 2) == 1) {
            tong = tong + a[i];
            dem = dem + 1;
       }
    }
    cout << setprecision(4) << fixed << (float) tong/dem;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    tinhMean();
}