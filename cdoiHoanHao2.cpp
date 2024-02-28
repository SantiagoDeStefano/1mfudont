#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_1 = -NMAX; int max_2 = -NMAX;
    int min_1 = NMAX;  int min_2 = NMAX;
    for(int i = 0; i < n; i++) {
        if(a[i] >= max_1) {
            max_2 = max_1;
            max_1 = a[i];
        } else if(a[i] > max_2) {max_2 = a[i];}
        if(a[i] <= min_1) {
            min_2 = min_1;
            min_1 = a[i];
        } else if(a[i] < min_2) {min_2 = a[i];}
    }
    cout << max(max_1*max_2, min_1*min_2);
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