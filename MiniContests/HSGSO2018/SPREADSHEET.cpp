#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define REP(i,n) for (int i = 0; i < n; ++ i)
#define FOR(i,a,b) for (int i = a; i <= b; ++ i)
#define FORD(i,b,a) for (int i = b; i >= a; -- i)
#define task ""
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef vector<int> vi;

int t, k;
string ans;
int main() {
    //freopen(task".inp", "r", stdin);
    //freopen(task".out", "w", stdout);
    scanf("%d", &t);
    FOR(i, 1, t) {
        ans = "";
        scanf("%d", &k);
        do {
            k --;
            if (k >= 0) ans = (char) (k % 26 + 'A') + ans;
            k /= 26;
        } while (k > 0);
        printf("%s\n", ans.c_str());
    }

}
