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
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_1 = -NMAX, max_2 = -NMAX, max_3 = -NMAX;
    int min_1 =  NMAX, min_2 =  NMAX;
    for(int i = 0; i < n; i++) {
        // So duong
        if(a[i] >= max_1) {
            max_3 = max_2;
            max_2 = max_1;
            max_1 = a[i];
        }
        else if(a[i] > max_2) {
            max_3 = max_2;
            max_2 = a[i];
        }
        else if(a[i] > max_3) {max_3 = a[i];}
        // So am
        if(a[i] <= min_1) {
            min_2 = min_1;
            min_1 = a[i];
        }
        else if(a[i] < min_2) {min_2 = a[i];}
        /* Mang co 2 so am -> se thanh dau duong va can nhan voi max_1 thanh vi min_3 de ra so lon nhat
           Neu co 3 so am -> max(a, b) chon tich max_1 max_2 max_3 */
    }
    cout << max(max_1*max_2*max_3, min_1*min_2*max_1);
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