#include <iostream>
#include <math.h>
#include <string>

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
    int n;
    cin >> n;
    int tong_cuan = 1; //1 la uoc cua moi so

    if(n <= 1) { // Base case
        cout << "NO";
    } else {
        n = abs(n);
        for(int i = 2; i <= n/2; i++) {
            if(n%i == 0) {
            tong_cuan += i; 
            }
        }    
        if(n == tong_cuan) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}

