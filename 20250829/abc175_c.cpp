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

    ll count = K - X / D;

    if (count % 2 == 0)
    {
        cout << X % D << endl;
    }
    else
    {
        cout << D - X % D << endl;
    }

    return 0;
}
