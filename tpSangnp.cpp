#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void dec2bin() {
    ll T;
    cin >> T;
    ll bin[200];
    while(T--) {
        ll n;
        cin >> n;
        ll dem = 0;
        while(n != 0){
            bin[dem] = n%2;
            dem++;
            n /= 2; 
        }
        for(ll i = dem - 1; i >= 0; i--) {
            cout << bin[i];
        }
        cout << endl;
    }
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    dec2bin();
}