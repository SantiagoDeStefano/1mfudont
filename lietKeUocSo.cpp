#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void listUOCSO(int n) {
    n = abs(n); // So am ko co uoc
    if(n == 0) cout << "INF"; 
    if(n == 1) { 
        cout << "1";
    } else {
        for(int i = n; i >= 1; i--) {
            if(n%i == 0) {
                cout << i << " ";
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
    int n;
    cin >> n;
    listUOCSO(n);
}

