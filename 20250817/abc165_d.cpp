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

    ll A, B, N;
    cin >> A >> B >> N;

    ll x = min(N, B - 1);

    cout << (A * x) / B - A * (x / B) << endl;

    return 0;
}
