#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int timAn(int n) {
    int tongSo = 0;
    for(int i = 1; i <= n/2; i++) {
        tongSo += i;
        if(tongSo > n - i) return i;
    }
    return 0;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << timAn(n);
}