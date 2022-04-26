#include <stdio.h>
int R=-1, F=-1, queue[5],ch;
void Enqueue();
void Dequeue();
void Display();
int isFull();
int isEmpty();
int main (){
    do {
        printf ("Press 0 to Exit -->\n");
        printf ("Press 1 to Enqueue -->\n");
        printf ("Press 2 to Dequeue -->\n");
        printf ("Press 3 to Display -->\n");
        scanf ("%d", & ch);
        switch (ch)
        {
        case 0:
            //do Nothing
            break;
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
        default:
            printf ("Invalid Choice\n\n");
            break;
        } 
    }while (ch>0);
}
void Enqueue(){
    if (R == 4){
        printf ("Queue is Full\n\n");
    }
    else{
        if (R == -1){
            F=R=0;
        }
        else{
            R += 1;
        }
        printf ("Enter a element --->");
        scanf ("%d", & queue[R]);
        printf ("\n\n\n");
    }
}
void Dequeue(){
    if (F == -1 || R < F){
        printf ("Queue is Empty\n\n");
    }
    else{
        if (F == R)
        {
            printf ("\n%d\n", queue[F]);
            F = R = -1;
        }
        else
        {
            printf("\n%d\n", queue[F]);
            F++;
        }
        printf ("\n\n\n");
    }
}
void Display(){
    if (F == -1){
        printf ("Queue is Empty\n\n");
    }
    else{
        printf ("\n");
        for (int i=F; i<=R; i++){
            printf("%d    ", queue[i]);
        }
        printf ("\n\n\n");
    }
}