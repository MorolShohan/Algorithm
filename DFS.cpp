#include<iostream>
using namespace std;

int main()
{
    class Solution {
public:
    bool vis[250000];
    bool isValid = false;
    vector<int> graph[250000];

    void dfs(int vertex)
    {
        vis[vertex] = true;
        for(int child : graph[vertex])
        {
            if(vis[child]) continue;
            dfs(child);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        for(auto x : edges)
        {
            int a = x[0];
            int b = x[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        dfs(source);
        return vis[destination];
    }
};

}

S
