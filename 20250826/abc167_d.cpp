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

    vector<ll> paths;
    ll current = 0, stringt_length, loop_length;
    set<ll> visited;

    while (true)
    {
        if (visited.contains(current))
        {
            auto target_it = find(paths.begin(), paths.end(), current);
            stringt_length = distance(paths.begin(), target_it);
            loop_length = paths.size() - stringt_length;

            break;
        }
        else
        {
            paths.emplace_back(current);
            visited.insert(current);
            current = An.at(current);
        }
    }

    if (K <= stringt_length)
    {
        cout << paths.at(K) + 1 << endl;

        return 0;
    }

    cout << paths.at((K - stringt_length) % loop_length + stringt_length) + 1 << endl;

    return 0;
}
