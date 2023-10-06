#include <stdio.h>
#include <stdlib.h>
int cnt = 0;
void MERGE(int ar[], int low, int mid, int high)
{
    // int ri = mid+1, li = low;
    int L_ar_sz = mid - low + 1;
    int R_ar_sz = high - mid;
    int left[L_ar_sz], right[R_ar_sz];
    for (int i = 0; i < L_ar_sz; i++)
    {
        left[i] = ar[low + i];
    }
    for (int i = 0; i < R_ar_sz; i++)
    {
        right[i] = ar[mid + 1 + i];
    }
    int li = 0, ri = 0, mi = low;
    while ((li < L_ar_sz) && (ri < R_ar_sz))
    {
        if (left[li] <= right[ri])
        {
            ar[mi++] = left[li++];
            // li++;
            // mi++;
        }
        else
        {
            ar[mi++] = right[ri++];
            cnt++;
        }
    }
    while (li < L_ar_sz)
    {
        ar[mi++] = left[li++];
    }
    while (ri < R_ar_sz)
    {
        ar[mi++] = right[ri++];
    }
}

void M_SORT(int ar[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        M_SORT(ar, low, mid);
        M_SORT(ar, mid + 1, high);
        MERGE(ar, low, mid, high);
    }
}
int main()
{
    int ar[10] = {2, 3, 8, 6, 1};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ar[i]);
    }
    printf("\nAfter Merge Sort the array is: \n");
    M_SORT(ar, 0, 5);
    printf("%d\n", cnt);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ar[i]);
    }

    return 0;
}
