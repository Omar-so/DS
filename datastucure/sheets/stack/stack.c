#include <stdio.h>
#include <stdlib.h>
#include "stack.h"  

void initStack(struct stack *s) {
    s->arr = (int *)malloc(sizeof(int) * MAX); 
    if (s->arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    s->top = -1; 
}

void push(struct stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++s->top] = value;
}

int pop(struct stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return -1;  
    }
    return s->arr[s->top--];
}

int size(struct stack *s) {
    return s->top + 1;
}

int front(struct stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1;  
    }
    return s->arr[0];
}

void CopyStack(struct stack *s, struct stack *s1) {
    initStack(s1);  
    s1->top = s->top;
    for (int i = 0; i <= s->top; i++) {
        s1->arr[i] = s->arr[i];
    }
}

void freeStack(struct stack *s) {
    free(s->arr);
}
