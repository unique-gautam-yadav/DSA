#include <stdio.h>
int main ()
{
    int tt, a[5], i,j;
    printf ("Enter 5 elements -->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        for (j=i+1; j<5; j++)
        {
            if (a[i]<a[j])
            {
                tt= a[i];
                a[i] = a[j];
                a[j] = tt;
            }
        }
    }
    printf ("<<-------- Sorted array -------->>\n");
    for (i=0; i<5; i++){
        printf ("%d\t", a[i]);
    }
}