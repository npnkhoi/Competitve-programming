#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef vector<int> vi;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define FOR(i,a,b) for (int i = a; i <= b; ++ i)
#define FORD(i,b,a) for (int i = b; i >= a; -- i)
#define REP(i,n) for (int i = 0; i < n; ++ i)
#define taskName ""

int main() {
    //freopen(taskName".inp", "r", stdin);
    //freopen(taskName".out", "w", stdout);
    scanf("%d%d", &m, &n);
    REP(i, m) REP(j, n) {
        scanf(" %c", &ch);
        int x = i - j + n - 1;
        int y = i + j;
        a[x][y] = (ch == '*');
        s[x][y] += s[x][y-1] + a[x][y];
    }
    p = m + n - 1; /// edge size of new table
    REP(u, p) FOR(v, u, p-1) {

    }
    return 0;
}
/** Happy Coding :D */
