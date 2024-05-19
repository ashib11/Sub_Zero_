#include <stdio.h>
#include <string.h>
#include <ctype.h>
const int N = 1e5;
void solve()
{
    int has[28] = {0};
    int n;
    scanf("%d", &n);
    char str[n + 12];
    scanf("%s", str);
    int arr[n + 12];
    for (int i = 0; i < (n + 12); ++i)
        arr[i] = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        char x = toupper(str[i]);
        has[x - 'A'] = 1;
        int cnt = 0;
        for (int j = 0; j < 26; ++j)
        {
            cnt += has[j];
        }
        arr[i] = cnt;
    }

    int m;
    scanf("%d", &m);
    while (m--)
    {
        int l;
        scanf("%d", &l);
        int ans = arr[l - 1];
        printf("%d ", ans);
    }
    printf("\n");
}
int main()
{
    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; ++i)
    {
        printf("Case %d: ", i);
        solve();
    }
}