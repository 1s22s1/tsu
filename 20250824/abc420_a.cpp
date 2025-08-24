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

    ll X, Y;
    cin >> X >> Y;

    ll tmp = (X + Y) % 12;

    if (tmp == 0)
    {
        cout << 12 << endl;
    }
    else
    {
        cout << tmp << endl;
    }

    return 0;
}
