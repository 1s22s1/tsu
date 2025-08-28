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

void solve(void)
{
    ll N, start = -1;
    string S;

    cin >> N >> S;

    rep(i, N - 1)
    {
        if (S.at(i) > S.at(i + 1))
        {
            start = i;
            break;
        }
    }

    if (start == -1)
    {
        cout << S << endl;

        return;
    }

    for (ll i = start; i < N - 1; i++)
    {
        if (S.at(i) >= S.at(i + 1))
        {
            swap(S.at(i), S.at(i + 1));
        }
        else
        {
            break;
        }
    }

    cout << S << endl;
}

int main()
{
    init();

    ll T;
    cin >> T;

    rep(i, T)
    {
        solve();
    }

    return 0;
}
