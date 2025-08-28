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

    ll N, K;
    cin >> N >> K;

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

    ll count = 0;
    rep(i, N)
    {
        count += abs(An.at(i) - Bn.at(i));
    }

    if (count <= K && K % 2 == count % 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
