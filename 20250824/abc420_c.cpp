#include <bits/stdc++.h>

using namespace std;

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

    vector<ll> An, Bn;

    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    rep(i, N)
    {
        ll b;
        cin >> b;
        Bn.emplace_back(b);
    }

    ll answer = 0;
    rep(i, N)
    {
        answer += min(An.at(i), Bn.at(i));
    }

    rep(i, Q)
    {
        char c;
        ll X, V;

        cin >> c >> X >> V;
        X--;

        if (c == 'A')
        {
            ll after = min(V, Bn.at(X));
            ll before = min(An.at(X), Bn.at(X));

            answer += (after - before);
            An.at(X) = V;
        }
        else
        {
            ll after = min(An.at(X), V);
            ll before = min(An.at(X), Bn.at(X));

            answer += (after - before);
            Bn.at(X) = V;
        }

        cout << answer << endl;
    }

    return 0;
}
