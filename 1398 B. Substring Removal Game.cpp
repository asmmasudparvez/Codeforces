#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;

ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r, len;
string s1, s2, s;

int main() {
    cin >> t;
    while (t--) {
        vector < int > sc;
        cin >> s;
        int c = 0;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                c++;
            } else {
                if (c > 0) {
                    sc.pb(c);
                }
                c = 0;
            }
        }
        if (c) sc.pb(c);
        sort(sc.begin(), sc.end());
        c = 0;
        for (int i = sc.size() - 1; i >= 0; i -= 2) {
            c += sc[i];
        }
        cout << c << endl;
    }
    return 0;
}
