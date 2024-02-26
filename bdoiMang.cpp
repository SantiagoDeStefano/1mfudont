#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void solve() {
    int n;  
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n-1; i++) { //Cho i chay tu ptu t2 den ptu gan cuoi
        if(i%2 != 0) {
            a[i] += abs(a[i-1] - a[i+1]);
        }
    }
    if((n-1)%2 != 0) {
            a[n-1] = a[n-1] + a[n-2];
        }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
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