#include <stdio.h>
int main ()
{
    int ca, top = -1, a[5], i;
    do
    {
        printf ("Press 0 to exit -->\n");
        printf ("Press 1 for push -->\n");
        printf ("Press 2 for pop -->\n");
        printf ("Press 3 for peek -->\n");
        printf ("Press 4 for display -->\n");
        scanf ("%d", &ca);
        switch (ca)
        {
        case 0:
            break;
        case 1:
            if (top >= 5)
            {
                printf ("Stack is OverFlow.\n");
            }
            else
            {
                printf ("Enter A element --->\n");
                top++;
                scanf ("%d", &a[top]);
            }
            printf("\n\n\n");
            break;
        case 2:
            if (top < 0)
            {
                printf ("Stack Is Under Flow\n");
            }
            else
            {
                printf ("TOP = %d\n", a[top]);
                a[top] = NULL;
                top--;
            }
            printf("\n\n\n");
            break;
        case 3:
            if (top < 0)
            {
                printf ("Stack Is Under Flow\n");
            }
            else
            {
                printf ("TOP = %d\n", a[top]);
            }
            printf("\n\n\n");
            break;
        case 4:
            if (top < 0)
                {
                    printf ("Stack is Underflow.\n");
                }
                else
                {
                    for (i=0; i<=top; i++){
                        printf ("%d    ", a[i]);
                    }
                    printf("\n");
                }
                printf("\n\n\n");
            break;
        default:
            printf ("Invalid Choise\n");
            break;
        }
    }
    while (ca > 0);
}