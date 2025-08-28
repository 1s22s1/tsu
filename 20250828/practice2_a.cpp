#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    ll N, Q;
    cin >> N >> Q;

    dsu d(N);

    ll t, u, v;
    rep(i, Q)
    {
        cin >> t >> u >> v;

        if (t == 0)
        {
            d.merge(u, v);
        }
        else
        {
            cout << d.same(u, v) << endl;
        }
    }

    return 0;
}
