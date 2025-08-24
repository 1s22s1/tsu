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

    vector<ll> An;

    rep(i, N)
    {
        ll a;
        cin >> a;
        An.emplace_back(a);
    }

    ll answer = 0;

    ll i = 0;
    while (i < N)
    {
        // 単調非増加の場合
        ll j = i;
        while (j < N - 1 && An.at(j) <= An.at(j + 1))
        {
            j++;
        }

        // 単調非減少の場合
        ll k = i;
        while (k < N - 1 && An.at(k) >= An.at(k + 1))
        {
            k++;
        }

        answer++;
        i = max(j + 1, k + 1);
    }

    cout << answer << endl;

    return 0;
}
