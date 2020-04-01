#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back

#define REP(i,n) for (int i = 0; i < (n); ++ i)
#define FOR(i,a,b) for (int i = (a); i <= (b); ++ i)
#define FORD(i,b,a) for (int i = (b); i >= (a); -- i)

#define debug(x) cerr << #x << ": " << x << "\n"
#define all(x) x.begin(), x.end()

#define task ""

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> li;
typedef vector<int> vi;

const int md = 998244353;

const int N = 2e5 + 5;

int n, k;
int a[N], pos[N], s[N], ft[N];
vi v0, v1;
ll fac[N], res = 0;

ll Exp(ll a, ll n) {
    if (n == 0) return 1;
    ll res = Exp(a, n/2);
    res = res * res % md;
    if (n % 2) res = res * a % md;
    return res;
}

void update(int i, int val) {
    for (; i <= n; i += i & -i) ft[i] += val;
}

int get(int i) {
    int res = 0;
    for (; i; i -= i & -i) res += ft[i];
    return res;
}

int get(int l, int r) {
    return get(r) - get(l - 1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//freopen(task".inp", "r", stdin);
	//freopen(task".out", "w", stdout);
    cin >> n;

    fac[0] = 1;
    FOR(i, 1, n) fac[i] = fac[i-1] * i % md;

    FOR(i, 1, n) {
        cin >> a[i];
        if (a[i] != -1) {
            res = (res + fac[k] * get(a[i] + 1, n) % md) % md;
            update(a[i], +1);
            pos[a[i]] = i;
            s[i] = s[i - 1];
        } else {
            k ++;
            s[i] = s[i - 1] + 1;
        }
    }
    FOR(i, 1, n) if (pos[i] == 0) v0.push_back(i);
    else v1.push_back(i);

    int idx; int x;

    idx = 0; x = 0;
    REP(i, k) {
        int val = v0[i];
        while (idx < v1.size() && v1[idx] < val) {
            x += s[pos[v1[idx]]];
            x %= md;
            idx ++;
        }
        res = (res + x * fac[k - 1] % md) % md;
    }

    idx = (n - k) - 1; x = 0;
    FORD(i, k - 1, 0) {
        int val = v0[i];
        while (idx >= 0 && v1[idx] > val) {
            x += s[n] - s[pos[v1[idx]]];
            x %= md;
            idx --;
        }
        res = (res + x * fac[k - 1] % md) % md;
    }
    res = (res + fac[k] * k % md * (k - 1) % md * Exp(4, md - 2) % md) % md;
    res = res * Exp(fac[k], md - 2) % md;
    cout << res << '\n';
}
