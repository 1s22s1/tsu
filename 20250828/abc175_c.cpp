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

    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);

    if (X / D >= K)
    {
        cout << X - K * D << endl;

        return 0;
    }

    ll count = X / D;

    if ((K - count) % 2 == 0)
    {
        cout << X - D * count << endl;
    }
    else
    {
        cout << abs(X - D * (count + 1)) << endl;
    }

    return 0;
}
