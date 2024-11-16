#include <bits/stdc++.h>
#define ll long long
#define all(a) a.begin(), a.end()
#define ld long double
#define endl '\n'
using namespace std;

void primefac(int n, vector<pair<int,int>>& vp) {
    for (int i = 2; i * i <= n; i++) {
        int x = 0; 
        while (n % i == 0) {
            n /= i;
            x++;
        }
        if (x > 0) {
            vp.push_back({i, x});
        }
    }

    if (n > 1) {
        vp.push_back({n, 1});
    }
}

void solve() {
    int x; 
    cin >> x;
    vector<pair<int,int>> vp;
    primefac(x, vp);
    
    for(int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
