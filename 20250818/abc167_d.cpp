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

    set<ll> set;
    vector<ll> paths;

    ll current = 0;
    ll whole_length = 0, straight_length = 0, loop_length = 0;
    while (true)
    {
        if (set.contains(current))
        {
            auto target = find(paths.begin(), paths.end(), current);
            straight_length = distance(paths.begin(), target);
            loop_length = paths.size() - straight_length;

            break;
        }
        else
        {
            set.insert(current);
            paths.emplace_back(current);
            whole_length++;
            current = An.at(current) - 1;
        }
    }

    if (K <= straight_length)
    {
        cout << paths.at(K) + 1 << endl;

        return 0;
    }

    cout << paths.at((K - straight_length) % loop_length + straight_length) + 1 << endl;

    return 0;
}
