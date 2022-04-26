#include <stdio.h>
int main ()
{
    int a[5],b[5], i,j,f=0,c=0;
    printf ("Enter 5 elements -->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d",&a[i]);
    }
    for (i=0; i<5; i++)
    {
        f=0;
        for (j=0; j<5; j++)
        {
            if (i != j)
            {
                if (a[i]!=a[j])
                {
                    f=0;
                }
                else {
                    f+=1;
                    break;
               }
            }
        }
        if (f==0)
        {
            b[c]=a[i];
            c++;
        }
    }
    printf ("<<-------- Unique Elements -------->>\n");
    for (i=0; i<c; i++)
    {
        printf ("%d  ", b[i]);
    }
}