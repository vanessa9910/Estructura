#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#define MAX 50
int size;
 
// Defining the stack structure
struct stack {
   int arr[MAX];
   int top;
};
 
// Initializing the stack(i.e., top=-1)
void init_stk(struct stack *st) {
   st->top = -1;
}
 
// Entering the elements into stack
void push(struct stack *st, int num) {
   if (st->top == size - 1) {
      printf("\nStack overflow(i.e., stack full).");
      return;
   }
   st->top++;
   st->arr[st->top] = num;
}
 
//Deleting an element from the stack.
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
