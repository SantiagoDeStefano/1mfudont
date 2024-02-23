#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

int maxMang(int soPtu) {
    int a[soPtu];
    for(int i = 0; i < soPtu; i++) {
        cin >> a[i];   
    }
    int max = a[0];
    for(int i = 0; i < soPtu; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
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
    cout << maxMang(n);
}