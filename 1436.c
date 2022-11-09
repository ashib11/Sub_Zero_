#include <stdio.h>

int main()
{
    int test_case, player_number, list_player[10], d, case_no = 1, captain, i;
    scanf("%d", &test_case);
    while (test_case--)
    {
        
        d = 0;
        scanf("%d", &player_number);
        for (i = 1; i <= player_number; i++)
        {
            scanf("%d", &list_player[i]);
            d = i / 2;
            captain = list_player[d + 1];
        }
        printf("Case %d: %d\n", case_no, captain);
        case_no++;
    }
    return 0;
}