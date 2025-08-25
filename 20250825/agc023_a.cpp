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

    ll N;
    cin >> N;

    map<ll, ll> count;
    count[0]++;
    ll current = 0;

    rep(i, N)
    {
        ll a;
        cin >> a;

        current += a;
        count[current]++;
    }

    ll answer = 0;
    for (auto [key, value] : count)
    {
        answer += value * (value - 1) / 2;
    }

    cout << answer << endl;

    return 0;
}
