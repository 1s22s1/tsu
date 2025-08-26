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

    ll K;
    cin >> K;

    bool ok = false;
    ll current = 7, count = 1;
    rep(i, 1e6)
    {
        if (current % K == 0)
        {
            ok = true;

            break;
        }
        else
        {
            current = current * 10 + 7;
            current = current % K;
        }

        count++;
    }

    if (ok)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
