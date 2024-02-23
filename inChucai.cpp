#include <iostream>
#include <math.h>
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
  char a, b;
  cin >> a >> b;
  for(int i = a - 32; i <= b - 32; i++) {
      cout << (char)i << " ";
  }
}