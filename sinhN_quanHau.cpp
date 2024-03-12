#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double long db;
typedef string str;
const ll NMAX = 1e6;
const ll lim = 1e18;
ll a[NMAX + 10];

int n;
bool isInCol[13], isInDiag1[26], isInDiag2[26]; 
vector<int> curQueensSetX, curQueensSetY;

void printToaDo() {
    for (int i = 0; i < n; i ++) {
        cout << "(" << curQueensSetX[i] << ", " << curQueensSetY[i] << ")";
        if (i < n - 1) cout << ", ";
    }
    cout << "\n";
}
void genQueensSet(int curRow) 
{
    for(int curCol = 1; curCol <= n; curCol++) {
        int curDiag1 = curCol + curRow;
        int curDiag2 = curCol - curRow + 13; //+13 de tranh so am

        //check toa do co thoa man ko
        if(isInCol[curCol] == true) continue;
        if(isInDiag1[curDiag1] == true) continue;
        if(isInDiag2[curDiag2] == true) continue;
        
        //them vao vector neu thoa man
        curQueensSetX.push_back(curRow);
        curQueensSetY.push_back(curCol);
        isInCol[curCol] = true;
        isInDiag1[curDiag1] = true;
        isInDiag2[curDiag2] = true;

        //goi ham tiep theo hoac in kq
        if(curQueensSetX.size() == n) printToaDo();
        else genQueensSet(curRow + 1);

        //xoa toa do va reset isInCol[], isInDiag1[], isInDiag2[]
        
        curQueensSetX.pop_back();
        curQueensSetY.pop_back();
        isInCol[curCol] = false;
        isInDiag1[curDiag1] = false;
        isInDiag2[curDiag2] = false;  
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

    memset(isInCol, 0, sizeof(isInCol));
    memset(isInDiag1, 0, sizeof(isInDiag1));
    memset(isInDiag2, 0, sizeof(isInDiag2));

    genQueensSet(1);
}