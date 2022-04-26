#include <stdio.h>
int main ()
{
    int a[5], a2, i,j,f,c,con;
    printf ("Enter 5 numbers -->\n");
    for (i=0; i<5; i++)
    {
        if (i==0)
        {
            con=0;
        }
        scanf ("%d", &a[i]);
        if (con<a[i])
        {
            con = a[i];
        }
    }
    

    for (i=0; i<5; i++)
    {
        if (a[i] == con)
        {
            continue;
        }
        else
        {
            for (j=0; j<5; j++)
            {
                if (a[j] == con)
                {
                    continue;
                }
                else
                {
                    if (a[i] >= a[j])
                    {
                        f=0;
                    }
                    else
                    {
                        f++;
                        break;
                    }
                }
            }
        }
        if (f==0)
        {
            printf ("Second Largest=%d", a[i]);
            break;
        }
    }
}