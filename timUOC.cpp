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

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    int a; int b;
    cin >> a >> b;
    a = abs(a); b = abs(b); // luon phai co dong nay khi tim
    cout << gcd(a, b);
}

