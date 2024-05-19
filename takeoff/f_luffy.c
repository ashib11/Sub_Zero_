#include <stdio.h>
#include <string.h>
void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char lst[n][12];
    char food[m][10];
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", lst[i]);
        arr[i] = 0;
    }
    for (int i = 0; i < m; ++i)
        scanf("%s", food[i]);
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {

        for (int j = i + 1; j < n; ++j)
        {
            if (strcmp(lst[i], lst[j]) != 0 && arr[i] == 0)
            {
                cnt++;
            }
            else
            {
                arr[j] = 1;
            }
        }
        arr[i] = 1;
    }
    printf("%d\n", cnt);
}
int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        solve();
    }
    return 0;
}