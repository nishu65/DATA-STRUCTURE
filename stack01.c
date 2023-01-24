#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int count=0;

struct stack {
    int array[SIZE];
    int top;
};
typedef struct stack s; 
void crt_empty_stk (s *a){
    a->top=-1;
}
int isfull(s *a){
     if (a->top == SIZE - 1)
    return 1;
  else
    return 0;

}
int isempty(s *a){
    if (a->top == -1)
    return 1;
  else
    return 0;

}
void push(s *a,int newitem){
    if (isfull(a)) {
    printf("STACK FULL");
  } else {
    a->top++;
    a->array[a->top] = newitem;
  }
  count++;
}
void pop (s *a){
    if (isempty(a)) {
    printf("\n STACK EMPTY \n");
  } else {
    printf("array popped= %d", a->array[a->top]);
    a->top--;
  }
  count--;
  printf("\n");

}
void printstack(s *a){
    printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", a->array[i]);
  }
  printf("\n");
}
int main(){
    int b;
    s *a= (s *) malloc(sizeof(s));
    crt_empty_stk(a);

    push (a,1);
    push (a,2);
    printstack(a);
    pop(a);
    push (a,3);
    push(a,4);
    printstack(a);
    pop(a);

    printf("After Popping out ");
    printstack(a);
}