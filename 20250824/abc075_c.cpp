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

template <typename T>

class LinearGraph
{

public:
    vector<ll> visited;
    vector<ll> previous;

    LinearGraph(T _graph)
    {
        graph = _graph;
    }

    void bfs(vector<ll> starts = {0})
    {
        visited.assign(graph.size(), -1);
        previous.assign(graph.size(), -1);

        queue<ll> queue;

        for (auto start : starts)
        {
            queue.emplace(start);
            visited.at(start) = 0;
        }

        while (!queue.empty())
        {
            auto current = queue.front();
            queue.pop();

            for (auto next : graph.at(current))
            {
                if (visited.at(next) != -1)
                {
                    continue;
                }

                queue.emplace(next);
                visited.at(next) = visited.at(current) + 1;
                previous.at(next) = current;
            }
        }
    }

private:
    T graph;
};

int main()
{
    init();

    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> ab;

    rep(i, M)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        ab.emplace_back(a, b);
    }

    ll answer = 0;
    rep(i, M)
    {
        vector<vector<ll>> g(N);
        rep(j, M)
        {
            if (i != j)
            {
                g.at(ab.at(j).first).emplace_back(ab.at(j).second);
                g.at(ab.at(j).second).emplace_back(ab.at(j).first);
            }
        }

        LinearGraph graph(g);
        graph.bfs({0});
        auto visited = graph.visited;

        if (any_of(visited.begin(), visited.end(), [](int n)
                   { return n == -1; }))
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
