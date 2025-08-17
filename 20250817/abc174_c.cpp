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

    ll number = 7, answer = 1;
    bool ok = false;

    rep(i, 10e5)
    {
        if (number % K == 0)
        {
            ok = true;
            break;
        }

        answer++;
        number = (number % K) * 10 + 7;
    }

    if (ok)
    {
        cout << answer << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
