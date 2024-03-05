#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

void solve() {
    int k;
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        vector<int> odd, even;

        int n = s.length();
        for(int i = 0; i < n; i++) {
            k = s[i] - '0';
            if(k%2)
                odd.push_back(k);
            else
                even.push_back(k);
        }
        int i = 0; int j = 0;
        while(i < even.size() || j < odd.size()) {
            if(i < even.size() && j < odd.size()) {
                if(even[i] <= odd[j]) {
                    cout << even[i++]; 
                } else {
                    cout << odd[j++];
                }
            }
            else if(i < even.size())
                cout << even[i++];
            else 
                cout << odd[j++];
        }
        cout << endl;
    }
}

int main()
{
ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0) ;
 #ifndef ONLINE_JUDGE
   freopen("main.inp", "r", stdin);
   freopen("main.out", "w", stdout);
#endif
    // int number; // User input integer
    // const int arraySize = 10; // Maximum size of the array (assuming 10 digits maximum)
    // int array[arraySize];

    // cin >> number; // Read the integer from the user

    // int temp = number;
    // int digitCount = 0; // Count of digits entered by user

    // // Extract digits and store them into the array
    // do {
    //     array[digitCount++] = temp % 10; // Extract the last digit
    //     temp /= 10; // Remove the last digit
    // } while (temp != 0 && digitCount < arraySize);

    // // Output the array
    // std::cout << "The array representation of the number " << number << " is: ";
    // for (int i = digitCount - 1; i >= 0; --i) {
    //     std::cout << array[i] << " ";
    // }
    // std::cout << std::endl;

    // return 0;
    solve();
}