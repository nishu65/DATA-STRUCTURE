#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define SIZE 5
int count;
struct stack {
    int array[SIZE];
    int top;
};

void create_empty_stack (struct stack *a);
int isempty(struct stack *a);
int isfull(struct stack *a); 
void push( struct stack *a);
void pop(struct stack *a);
void display(struct stack *a);
int main(){
    int b;
    struct stack *a=(struct stack *)malloc(sizeof(struct stack));
    create_empty_stack(a);
    do{
    printf("FOR ENTER NEW ELEMENT PRESS 0.\n");
    printf("FOR DELETING LATEST ELEMENT PRESS 1.\n");
    printf("FOR DISPLAYING STACK PRESS 2.\n");
    printf("EXIT FROM PROGRAM PRESS 0.\n");
    printf("PRESS ( 1 || 2 || 3 || 0 ):"); 
    scanf("%d",&b);
    if (b==1){
        push(a);
    }
    else if(b==2){
        pop(a);
    }
    else if (b==3){
        display(a);
    }
    else if(b==0){
         break;
    }
    else{
        printf("INVALID INPUT ");
       

    }
    
    }while(1);


}
void create_empty_stack(struct stack *a){
    a->top=-1;
}
int isfull(struct stack *a){
    if(a->top==SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty( struct stack *a){
    if(a->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *a){
    if(isfull(a)){
       printf("STACK IS FULL .\n");

    }
    else{
        
         int b,c;
        do{
            a->top++;
            printf("ENTER DATA :");
            scanf("%d",&b);
            a->array[a->top]=b;
            count++;
        }while(c==0);
    }
}
void pop(struct stack *a){
    if(isempty(a)){
        printf("STACK IS EMPTY .\n");
    }
    else{
        a->top=a->top-1;
        count--;
    }

}
void display(struct stack *a){
    int i=0;
    printf("STACK :"); 
    for(i;i<count;i++){
        a->top=i;
        
        printf("%d\t",a->array[a->top]);
    }
    printf("\n");
}

