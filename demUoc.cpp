#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int demUoc(int a) {
    int demUoc = 0;
    for(int i = 1; i <= a; i++) {
        if(a%i == 0) demUoc += 1;
    }
    return demUoc;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    int a;
    cin >> a; a = abs(a);
    cout << demUoc(a);
}