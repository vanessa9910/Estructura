#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#define MAX 50
int size;
 
// STACK
struct stack {
   int arr[MAX];
   int top;
};
 
// INIT STACK
void init_stk(struct stack *st) {
   st->top = -1;
}
 
// PUSH
void push(struct stack *st, int num) {
   if (st->top == size - 1) {
      printf("\nStack overflow(i.e., stack full).");
      return;
   }
   st->top++;
   st->arr[st->top] = num;
}
 
//POP
int pop(struct stack *st) {
   int num;
   if (st->top == -1) {
      printf("\nStack underflow(i.e., stack empty).");
      return NULL;
   }
   num = st->arr[st->top];
   st->top--;
   return num;
}
 
void display(struct stack *st) {
   int i;
   for (i = st->top; i >= 0; i--)
      printf("\n%d", st->arr[i]);
}
int main(){
   struct stack ptr;
    init_stack(&ptr);
    size = 25;
    push(&ptr, 5);
    push(&ptr, 6);
    push(&ptr, 8);
    push(&ptr, 8);
    pop(&ptr);
    display(&ptr);
      
   return (0);
}
