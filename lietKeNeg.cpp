#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    int n = 0;
    do {
        cin >> a[n];
        n++;
    } while(a[n-1] != 0); //Vi cuoi mang luon la so 0
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            cout << a[i] << " ";
            cnt++;
        }
    }
    if(cnt == 0) cout << "NOT FOUND";
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