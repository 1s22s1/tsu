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

    ll A, B, C;
    cin >> A >> B >> C;

    vector<ll> vec = {A, B, C};
    auto max_it = max_element(vec.begin(), vec.end());

    ll diff = *max_it * 3 - accumulate(vec.begin(), vec.end(), 0LL);

    if (diff % 2 == 0)
    {
        cout << diff / 2 << endl;
    }
    else
    {
        cout << diff / 2 + 2 << endl;
    }

    return 0;
}
