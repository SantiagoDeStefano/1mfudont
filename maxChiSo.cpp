#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
int cnt[10000001]={0};

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    int max = a[0];
    int maxIndex = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    int caoHon = 0;
    if(cnt[max] == 1) {
        cout << maxIndex;
    } else if(cnt[max] > 1) {
        for(int i = 0; i < n; i++) {
            if(max <= a[i]) {
                caoHon = i;
            }
        }
        cout << caoHon;
    }
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    solve();
}