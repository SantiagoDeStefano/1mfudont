#include <iostream>
#include <math.h>
#include <string>

using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

void rutGon(int x, int y) {
    if(y == 0 || (x == 0 && y == 0)) { // loai truong hop x/0 va 0/0
        cout << "INVALID";
    } else {
        if(x == 0) {
            cout << x;
        } else {
            if(x%y == 0) {
                cout << x/y;
            } else {
                if(y < 0) {
                    cout << -x/gcd(abs(x), abs(y)) << " " << -y/gcd(abs(x), abs(y));
                } else {
                    cout << x/gcd(abs(x), abs(y)) << " " << y/gcd(abs(x), abs(y));
                }
            }
        }
    }
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    int a; int b;
    cin >> a >> b;
    rutGon(a, b);
}

