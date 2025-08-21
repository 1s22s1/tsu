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
    vector<ll> An;
    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    set<ll> visited;
    vector<ll> paths;
    ll current = 0;
    ll stright_length = -1, loop_length = -1;

    while (true)
    {
        if (visited.contains(current))
        {
            auto target = find(paths.begin(), paths.end(), current);
            stright_length = distance(paths.begin(), target);
            loop_length = paths.size() - stright_length;

            break;
        }
        else
        {
            visited.insert(current);
            paths.emplace_back(current);
            current = An.at(current) - 1;
        }
    }

    if (K <= stright_length)
    {
        cout << paths.at(K) + 1 << endl;

        return 0;
    }

    cout << paths.at((K - stright_length) % loop_length + stright_length) + 1 << endl;

    return 0;
}
