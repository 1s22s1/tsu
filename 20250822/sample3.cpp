#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)

ll p = 1e9 + 7;

ll mod(ll a, ll n)
{
    if (n == 1)
    {
        return a % p;
    }

    if (n % 2 == 1)
    {
        return (a * mod(a, n - 1)) % p;
    }

    ll tmp = mod(a, n / 2);
    return (tmp * tmp) % p;
}

int main()
{
    ll A, N;
    cin >> A >> N;

    cout << mod(A, N) << endl;

    return 0;
}
