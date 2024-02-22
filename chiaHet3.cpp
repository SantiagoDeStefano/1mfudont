#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
#ifndef ONLINE_JUDGE
freopen("main.inp", "r", stdin);
freopen("main.out", "w", stdout);
#endif
    ll a, b;
    cin >> a >> b;
    bool koCoso = 0;
    for(ll i = b - 1; i > a; i--) {
        if(i%3 == 0) {
            cout << " " << i;
            koCoso = 1;
        }
    } if(koCoso == 0) cout << "NOT FOUND";
}