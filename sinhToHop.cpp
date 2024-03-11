#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];
int mark[20];

int n, k;
vector <int> curSubset;

void printSubset()
{
    for (int i : curSubset) cout << i << " ";
    cout << "\n";
}

void genSubset(int pos)
{
    int lastNum = (curSubset.empty() ? 0 : curSubset.back());  //số cuối cùng được chọn
    for (int i = 1; i <= n; i ++)
    {
        curSubset.push_back(i);
        if (curSubset.size() == k) printSubset();
        else genSubset(pos + 1);
        curSubset.pop_back();
    }
}


int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    cin >> n >> k;
    curSubset.clear();
    genSubset(1);

    return 0;
}