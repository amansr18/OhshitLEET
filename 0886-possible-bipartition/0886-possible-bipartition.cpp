class Solution {
public:

    bool possibleBipartition(int n, vector < vector < int >> & dislikes) {

      unordered_map < int, vector < int >> mpp;

      for (auto it: dislikes)
      {
        mpp[it[0]].push_back(it[1]);
        mpp[it[1]].push_back(it[0]);
      }

      vector < int > vis(n + 1, -1);

      for (int i = 1; i <= n; ++i)
      {
        if (vis[i] == -1)
        {
          queue < int > q;
          q.push(i);
          vis[i] = 0;

          while (!q.empty())
          {
            int temp = q.front();
            q.pop();

            for (auto it: mpp[temp])
            {

              if (vis[it] == vis[temp]) return false;

              if (vis[it] == -1) {
                vis[it] = vis[temp] ^ 1;
                q.push(it);
              }

            }

          }
        }
      }

      return true;

    }
};
