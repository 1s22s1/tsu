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

    vector<ll> An = {0};
    rep(i, N)
    {
        ll a;
        cin >> a;

        An.emplace_back(a);
    }

    for (ll i = 1; i <= N; i++)
    {
        ll current = An.at(i), answer = 1;
        while (current != i)
        {
            current = An.at(current);
            answer++;
        }

        cout << answer << ' ';
    }

    cout << endl;

    return 0;
}
