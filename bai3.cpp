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

int countPrime[1000001]; // dem so luong uoc nguyen to

signed main(){
    setup();

    int n;
    cin >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 2; i*i <= 1000000; i++){
        if(countPrime[i] == 0){
            for(int j = i; j<= 1000000; j += i){
                countPrime[j]++;
            }
        }
    }

    int res = -1;
    int cnt = -1;
    for(int i = 1; i <= n; i++){
        if(cnt < countPrime[a[i]]){
            res = a[i];
            cnt = countPrime[a[i]];
        }
    }

    cout << res;

    return 0;
}
