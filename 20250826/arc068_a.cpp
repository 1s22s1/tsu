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

    ll x;
    cin >> x;

    ll answer = x / 11 * 2;
    ll rem = x % 11;

    if (rem == 0)
    {
        // Do nothing
    }
    else if (1 <= rem && rem <= 6)
    {
        answer++;
    }
    else if (7 <= rem && rem <= 10)
    {
        answer += 2;
    }

    cout << answer << endl;

    return 0;
}
