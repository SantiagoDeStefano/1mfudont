#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];
int n;
str curString;

void genString(int pos) {
    if(pos > n) {
        cout << curString << " ";
        return; 
    }
    for(char i = '0'; i <= '1'; i++) {
        curString.push_back(i);
        genString(pos + 1);
        curString.pop_back();
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
    curString = " ";
    genString(1);
}