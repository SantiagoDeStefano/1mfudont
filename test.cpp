#include <iostream>
#include <math.h>
using namespace std; 
string s; 
int main() { 
    iosbase::syncwith_stdio(false); 
    cin.tie();cout.tie(); 
    long long tam; 
    cin>>s; 
    long long r=s.length()-1; 
    for(long long i=r;i>=0;i--) { 
        if(s[i]!='0') {
            tam=i;
            break;
        } 
    } for(long long i=tam;i>=0;i--) { 
        cout<<s[i]; 
        } 
    return 0; 
}