#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

int X[100];
int used[100] = {0};
int n;

void printX() {
    for(int i = 1; i <= n; i++) {
        cout << X[i];
    }
    cout << endl;
}

void hVi(int pos) {
    for(int i = 1; i <= n; i++) {
        if(used[i] == 0) {
            used[i] = 1; //danh dau ptu i da duoc sdung
            X[pos] = i;
            if(pos == n) printX();
            else hVi(pos + 1);
            used[i] = 0; //backtracking 
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
    cin >> n;
    hVi(1);
}