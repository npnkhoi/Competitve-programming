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

#define task "fibistr"

const int nTest = 100;
const double TimeLimit = 1.0;

double maxTime = 1.0;
int score = 0;

long long Rand(long long l, long long r) {
    return l + (1LL * rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                1LL * rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                1LL * rand() * (RAND_MAX + 1) +
                1LL * rand() ) % (r-l+1);
}

void test() {
    ofstream inp(task".inp");
    int m = Rand(1, 5);
    int n = Rand(1, 5);
    while (m--) inp << (char) ('A' + Rand(0, 4));
    inp << " ";
    while (n--) inp << (char) ('A' + Rand(0, 4));
    inp << "\n";
    int p = Rand(1, 5);
    while (p--) inp << (char) ('A' + Rand(0, 4));
    inp << "\n";
    inp << Rand(1, 10);
    inp.close();
}
int main() {
    srand(time(NULL));

    FOR(iTest, 1, nTest) {
        printf("* TEST NUMBER %d\n", iTest);

        test();

        double Time1 = clock();
        system(task".exe");
        Time1 = (clock() - Time1)/double(CLOCKS_PER_SEC);

        double Time2 = clock();
        system(task"_BF.exe");
        Time2 = (clock() - Time2)/double(CLOCKS_PER_SEC);

        printf("Time: %lf - %lf\n", Time1, Time2);

        if (system("fc "task".out "task".ans")) {
        //if (system("fc "task".out "task".out")) {
            printf("WRONG ANSWER\n");
            return 0;
        }
        else {
            printf("CORRECT\n");
            if (Time1 > TimeLimit) {
                printf("TIME LIMIT EXCEEDED\n");
                return 0;
            }
        }
    }
    return 0;
}
/**/
