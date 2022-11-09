
#include<stdio.h>
#include<math.h>

int main()
{
    int w, h, r1, r2,c, m, r;
    while (1)
    {
        scanf("%d %d %d %d", &w, &h, &r1, &r2);
        if (w == 0 && h == 0 && r1 == 0 && r2 == 0)
            break;
        double q;
        if(w >= h) m = h;
        else m = w;
        if(r1 >= r2) r = r1;
        else r = r2;
        if( ((sqrt(((w - r1 - r2) * (w - r1 - r2)) + ((h - r1 - r2) * (h - r1 - r2)))) >= (r1 + r2)) && (m >= 2*r))
        {
            printf("S\n");
        }
        else
            printf("N\n");
    }
    return 0;
}