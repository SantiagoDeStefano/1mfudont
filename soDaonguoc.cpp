#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

void soDaonguoc(str soDao) {
    reverse(soDao.begin(), soDao.end()); // dung reverse thay vi for
    while(soDao[0] == '0') { 
        soDao.erase(0, 1);  // 0123456789 xoa so 0
    }
    cout << soDao;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    string s;
    cin >> s;
    soDaonguoc(s);
}