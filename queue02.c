#include <stdio.h>
#include <limits.h>
#define SIZE 5
int array[SIZE], front = -1, rear = -1;
void enqueue();
void dequeue();
void display();
int main()
{
    int b;
    do
    {
        printf("FOR ENTER NEW ELEMENT PRESS 1.\n");
        printf("FOR DELETING ELEMENT PRESS 2.\n");
        printf("FOR DISPLAYING QUEUE PRESS 3.\n");
        printf("EXIT FROM PROGRAM PRESS 0.\n");
        printf("PRESS ( 1 || 2 || 3 || 0 ):");
        scanf("%d", &b);
        if (b == 1)
        {
            enqueue();
        }
        else if (b == 2)
        {
            dequeue();
        }
        else if (b == 3)
        {
            display();
        }
        else if (b == 0)
        {
            break;
        }
    } while (1);
    return 0;
}
void enqueue()
{
    if (rear == SIZE - 1)
    {
        printf("QUEUE IS FULL.");
    }
    else
    {
        int a;
        if (front == -1)
        {
            front = 0;
        }
        printf("ENTER ELEMENT : ");
        scanf("%d", &a);
        rear++;
        array[rear] = a;
    }
}
void dequeue()
{
    if (rear == -1)
    {
        printf("STACK IS EMPTY.");
    }
    else
    {
        front++;
        if (front > rear)
        {
            rear = front = -1;
        }
    }
}
void display()
{
    if (rear == -1)
    {
        printf("STACK IS EMPTY.");
    }
    else
    {
        int a;
        printf("QUEUE :");
        for (a = front; a <= rear; a++)
        {
            printf("%d", array[a]);
        }
        printf("\n");
    }
}