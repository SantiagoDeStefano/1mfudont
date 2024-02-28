#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    long a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    //Dinh thuc Cramer
    long D = a1 * b2 - a2 * b1;
    long Dx = c1 * b2 - c2 * b1;
    long Dy = a1 * c2 - a2 * c1;

    if (D == 0) {
        if (Dx == 0)
            cout << "VOSONGHIEM" << endl;
        else
            cout << "VONGHIEM" << endl;
    } else {
        double x = static_cast<double>(Dx) / static_cast<double>(D);
        double y = static_cast<double>(Dy) / static_cast<double>(D);
        cout << fixed;
        cout.precision(2);
        cout << x << " " << y << endl;
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