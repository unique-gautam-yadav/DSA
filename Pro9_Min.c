#include <stdio.h>
int main ()
{
    int a[5], i, j, f=0, c=0;
    printf ("Enter a Num -->");
    for (i=0; i<5; i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
           if (a[i] <=a[j])
           {
               f=0;
           }
           else
           {
               f += 1;
               break;
           }
        }
        if (f==0)
        {
            printf("Smallest element=%d",a[i]);
            break;
        }
    }
}
