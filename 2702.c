#include <stdio.h>
#include <string.h>
int main()
{
    int Pc, Pb, Pp, Rc, Rb, Rp, sum = 0;
    scanf("%d %d %d", &Pc, &Pb, &Pp);
    getchar();
    scanf("%d %d %d", &Rc, &Rb, &Rp);
    if (Rc > Pc)
    {
        sum = sum + (Rc - Pc);
    }
    if (Rb > Pb)
    {
        sum = sum + (Rb - Pb);
    }
    if (Rp > Pp)
    {
        sum = sum + (Rp - Pp);
    }
    printf("%d\n", sum);
    return 0;
}