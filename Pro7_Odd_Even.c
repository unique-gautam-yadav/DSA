#include <stdio.h>
int main ()
{
    int a[5], odd[3], even[3], i, od=0, ev=0;
    printf ("Enter 5 elements --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even[ev] = a[i];
            ev++;
        }
        else
        {
            odd[od] = a[i];
            od++;
        }
    }
    printf ("Even Elements --->\n");
    for (i=0; i<ev; i++)
    {
        printf ("%d\t", even[i]);
    }
    printf ("\nOdd Elements --->\n");
    for (i=0; i<od; i++)
    {
        printf ("%d\t", odd[i]);
    }
}