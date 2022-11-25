#include <stdio.h>
#include <stdlib.h>
const int maxn = 10;
int div_cnt[maxn], ans[maxn];
void pre_cal()
{
    for (int i = 2; i < maxn; i++)
    {
        for (int j = i; j < maxn; j += i)
        {
            printf("div_count %d %d\n", i, j);
            div_cnt[j]++;
            printf("div_count %d value %d\n",j, div_cnt[j]);
        }
    }
    for (int i = 1; i < maxn; i++)
        ans[i] += (ans[i - 1] + div_cnt[i]);
}
int main()
{
    pre_cal();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }
    return 0;
}