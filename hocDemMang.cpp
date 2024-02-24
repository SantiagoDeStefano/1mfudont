#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int hocDem() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i <= n; i++) {
        cin >> a[i];
    }
    int dem = 0;
    for(int i = 0; i <= n; i++) {
        if(x == a[i]) dem = dem + 1;
    }
    return dem;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    cout << hocDem();
}