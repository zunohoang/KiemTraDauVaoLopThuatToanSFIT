#include <bits/stdc++.h>
#define int long long
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define QUERY while(q--)
#define MOD 1000000007
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void setup(){
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    fastIO
}

bool comp(const int a, const int b){
    return a > b;
}

signed main(){
    setup();

    // chia 90
    // chia het 9 va 10
    // 9 => tong cac chu so chia het 9
    // chia het 10 = > tận cùng là 10

    string s;
    cin >> s;

    int sum = 0; // tong cac chu so
    int cntNumber[10];
    // goi cntNumber[i] la so lan xuat hien cua i

    memset(cntNumber, 0, sizeof(cntNumber));
    for(int i = 0; i < s.length(); i++){
        sum += s[i] - 48; // or s[i] - '0';
        cntNumber[s[i] - 48]++;
    }

    if(sum % 9 != 0 || cntNumber[0] == 0){
        cout << -1;
        return 0;
    }

    for(int i = 9; i >= 0; i--){
        for(int j = 1; j <= cntNumber[i]; j++){
            cout << i;
        }
    }

    return 0;
}
