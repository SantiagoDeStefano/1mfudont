#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;

// bool timKiem() {
//     ll n, x;
//     cin >> n >> x;
//     ll a[n];
//     for(ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }   
//     ll low = 0; ll high = n - 1;
//     while(low <= high) {
//         ll mid = low + (high-low)/2;
//         // Check mid
//         if(a[mid] == x) return true;
//         // Neu x >, loai nua ben trai
//         if(a[mid] < x) low = mid + 1;
//         // Neu x <, loai nua ben phai
//         else high = mid - 1;
//     }
//     return false;
// }

bool timKiem() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            return true;
        }
    }
    return false;
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    // if(timKiem()) {
    //     cout << "YES";
    // } else {
    //     cout << "NO";
    // }
    if(timKiem()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}