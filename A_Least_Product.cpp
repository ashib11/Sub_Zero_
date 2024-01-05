#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int tc = 1;
   cin >> tc;
   while (tc--)
   {
       int n, m, u, v, x, y;
       cin >> n >> m;

       vector<int> color(n + 1, 0);
       queue<int> q;

       for (int i = 1; i <= n; i++)
       {
           cin >> x;
           if (x == 0)
           {
               color[i] = 1;
               q.push(i);
           }
       }

       while (!q.empty())
       {
           u = q.front();
           q.pop();

           for (int i = 0; i < m; i++)
           {
               cin >> v;
               if (color[v] == 0)
               {
                   color[v] = -color[u];
                   q.push(v);
               }
               else if (color[v] == color[u])
               {
                   cout << "No" << endl;
                   return 0;
               }
           }
       }

       for (int i = 1; i <= n; i++)
       {
           if (color[i] == 0)
           {
               cout << "No" << endl;
               return 0;
           }
       }

       cout << "Yes" << endl;
   }

   return 0;
}