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

    ll N, L;
    cin >> N >> L;

    map<ll, ll> frequency;
    ll current = 0;
    frequency[0]++;

    rep(i, N - 1)
    {
        ll d;
        cin >> d;
        current = (current + d) % L;
        frequency[current]++;
    }

    if (L % 3 != 0)
    {
        cout << 0 << endl;

        return 0;
    }

    ll answer = 0;

    rep(i, L / 3)
    {
        answer += frequency[i] * frequency[i + L / 3] * frequency[i + L * 2 / 3];
    }

    cout << answer << endl;

    return 0;
}
