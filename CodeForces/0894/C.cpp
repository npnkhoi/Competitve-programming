using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i = a; i <= b; ++ i)
#define FORD(i,b,a) for (int i = b; i >= a; -- i)
#define REP(i,n) for (int i = 0; i < n; ++ i)
const int N = 1000 + 5;
int a[N], n;
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
    //ifstream inp(".inp");
    //ofstream out(".out");
    scanf("%d", &n);
    FOR(i, 1, n) scanf("%d", &a[i]);
    FOR(i, 2, n)
    if (a[i] % a[1] != 0) {
        printf("-1");
        return 0;
    }
    printf("%d\n", 2*n);
    FOR(i, 1, n) printf("%d %d ", a[1], a[i]);
    return 0;
}
/** Happy Coding :D */

