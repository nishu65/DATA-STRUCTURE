#include<stdio.h> 
#include<limits.h>
#include<stdlib.h>
#define SIZE 5
struct queue{
    int array[SIZE];
    int rear;
    int front;
};
void create_empty_queue(struct queue *a);
int isempty(struct queue *a);
int isfull(struct queue *a);
void enqueue(struct queue *a);
void dequeue(struct queue *a);
void display(struct queue *a);
int main (){
    int b;
    struct queue *a;
    a=(struct queue *)malloc(sizeof(struct queue));
    create_empty_queue(a);
    do{
        printf("FOR ENTER NEW ELEMENT PRESS 1.\n");
        printf("FOR DELETING ELEMENT PRESS 2.\n");
        printf("FOR DISPLAYING QUEUE PRESS 3.\n");
        printf("EXIT FROM PROGRAM PRESS 0.\n");
        printf("PRESS ( 1 || 2 || 3 || 0 ):"); 
        scanf("%d",&b);
        if (b==1){
            enqueue(a);
        }
        else if(b==2){
            dequeue(a);
        }
        else if(b==3){
            display(a);
        }
    }while(1);
    return 0;
} 
void create_empty_queue(struct queue *a){
    a->front=-1;
    a->rear=-1;
}
int isfull(struct queue *a){
    if (a->rear==SIZE-1)
    {
        return 1;
    }
    else{
        return 0; 
    }
}
int isempty(struct queue *a){
    if (a->rear==-1)
    return 1;
    else{
        return 0;
    }
}
void enqueue(struct queue *a){
    if(isfull(a)){
        printf("STACK IS FULL.");
    }
    else{
        if(a->front==-1)
        a->front=0;

        a->rear++;
        printf("ENTER QUEUE ELEMENT");
        scanf("%d",a->array[a->rear]);

    }
}
void dequeue(struct queue *a){
    if (isempty(a)){
        printf("QUEUE IS EMPTY");
    }
    else{
        printf(" DELEING ELEMENT IS :%d",a->array[a->front]);
        a->front++;
        if (a->front>a->rear){
            a->front=a->rear=-1;
        }
    }
}
void display(struct queue *a){
    if (isempty(a)){
        printf("QUEUE IS EMPTY .");

    }
    else{
        int b;
        for(b=a->front;b<=a->rear;b++){
            printf("b=%d",b);
            printf("QUEUE : %d",a->array[b]);
        }
        printf("\n");
    }
}
