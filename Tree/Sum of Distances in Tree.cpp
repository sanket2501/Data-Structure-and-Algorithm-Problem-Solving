/*
Hard

There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges.

You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes.

 

Example 1:


Input: n = 6, edges = [[0,1],[0,2],[2,3],[2,4],[2,5]]
Output: [8,12,6,10,10,10]
Explanation: The tree is shown above.
We can see that dist(0,1) + dist(0,2) + dist(0,3) + dist(0,4) + dist(0,5)
equals 1 + 1 + 2 + 2 + 2 = 8.
Hence, answer[0] = 8, and so on.
Example 2:


Input: n = 1, edges = []
Output: [0]
Example 3:


Input: n = 2, edges = [[1,0]]
Output: [1,1]
*/

/*
class Solution {
public:
    vector<vector<int>>v;
    vector<int>counter,res;

    void dfs1(int i, int p=-1)
    {
        for(auto u : v[i])
        {
            if(u==p)
                continue;
            dfs1(u, i);
            counter[i]+=counter[u];
            res[i]+=res[u]+counter[u];
        }
        counter[i]+=1;
    }

    void dfs2(int i, int n, int p=-1)
    {
        for(auto u : v[i])
        {
            if(u==p)
                continue;
            res[u]=res[i]-counter[u]+n-counter[u];
            dfs2(u,n,i);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        v.resize(n);

        for(int i=0;i<n-1;i++)
        {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }

        res.resize(n);
        counter.resize(n);

        dfs1(0);
        dfs2(0,n);

        return res;
    }
};
*/