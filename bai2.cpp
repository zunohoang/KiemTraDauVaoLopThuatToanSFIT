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


signed main(){
    setup();

    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    int maxLeft[n + 1];
    int maxRight[n + 1];
    memset(maxLeft, 0, sizeof(maxLeft));
    memset(maxRight, 0, sizeof(maxRight));
    maxLeft[2] = a[1];
    maxRight[n - 1] = a[n];

    for(int i = 3; i <= n; i++){
        maxLeft[i] = max(maxLeft[i - 1], a[i - 1]);
    }
    for(int j = n - 2; j >= 1; j--){
        maxRight[j] = max(maxRight[j + 1], a[j + 1]);
    }

    int res = INT_MIN;
    for(int i = 2; i <= n-1; i++){
        res = (res < maxLeft[i] - a[i] + maxRight[i]) ? maxLeft[i] - a[i] + maxRight[i] : res;
    }

    cout << res;

    return 0;
}

/*

    res = max(left) - a[j] + max(right)
    j (2 -> n - 1)
 */
