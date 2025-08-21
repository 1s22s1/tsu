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

    string S;
    cin >> S;

    if (S == "red")
    {
        cout << "SSS" << endl;
    }
    else if (S == "blue")
    {
        cout << "FFF" << endl;
    }
    else if (S == "green")
    {
        cout << "MMM" << endl;
    }
    else
    {
        cout << "Unknown" << endl;
    }

    return 0;
}
