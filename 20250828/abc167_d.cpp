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
        a--;

        An.emplace_back(a);
    }

    vector<ll> path;
    set<ll> visited;
    ll current = 0, stright_length, loop_length;

    while (true)
    {
        if (visited.contains(current))
        {
            auto target_it = find(path.begin(), path.end(), current);
            stright_length = distance(path.begin(), target_it);
            loop_length = path.size() - stright_length;

            break;
        }
        else
        {
            path.emplace_back(current);
            visited.emplace(current);
            current = An.at(current);
        }
    }

    if (K <= stright_length)
    {
        cout << path.at(K) + 1 << endl;

        return 0;
    }

    cout << path.at((K - stright_length) % loop_length + stright_length) + 1 << endl;

    return 0;
}
