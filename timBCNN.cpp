#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str; 

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    int a, b;
    cin >> a;
    cin >> b;
    a = abs(a); b = abs(b);
    cout << lcm(a, b);
}