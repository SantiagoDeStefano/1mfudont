#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

bool is_SNT(ll n) {
    if(n < 2) return false;
    for(ll i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    ll n;
    cin >> n;
    if(is_SNT(n) == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

