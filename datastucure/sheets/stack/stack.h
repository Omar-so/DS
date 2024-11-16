#ifndef STACK_H
#define STACK_H

#define MAX 100

struct stack {
    int top;
    int *arr;
};

void initStack(struct stack *s);
void push(struct stack *s, int value);
int pop(struct stack *s);
int size(struct stack *s);
int front(struct stack *s);
void CopyStack(struct stack *s, struct stack *s1);
void freeStack(struct stack *s);

#endif 
