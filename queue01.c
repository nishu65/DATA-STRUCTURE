#include<stdio.h> 
#include<limits.h>
#include<stdlib.h>
#define SIZE 5
struct queue{
    int array[SIZE];
    int rear;
    int front;
};
int isempty(struct queue *a);
int isfull(struct queue *a);
void enqueue(struct queue *a);
void dequeue(struct queue *a);
void display(struct queue *a);
int main (){
    int b;
    struct queue *a;
    a=(struct queue *)malloc(sizeof(struct queue));
    
} 