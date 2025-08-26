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

    vector<ll> paths;
    ll stright_length, loop_length;

    while (true)
    {
        ll current = N;

        if (find(paths.begin(), paths.end(), current) != paths.end())
        {
            auto target_it = find(paths.begin(), paths.end(), current);
            stright_length = distance(paths.begin(), target_it);
            loop_length = paths.size() - stright_length;

            break;
        }
        else
        {
            paths.emplace_back(current);

            while (N > 0)
            {
                current += N % 10;
                N /= 10;
            }

            current %= (ll)1e5;
            N = current;
        }
    }

    if (K <= stright_length)
    {
        cout << paths.at(K) << endl;

        return 0;
    }

    cout << paths.at((K - stright_length) % loop_length + stright_length) << endl;

    return 0;
}
