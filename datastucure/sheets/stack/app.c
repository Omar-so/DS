#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    struct stack s;  
    
    initStack(&s);
    
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Size of stack: %d\n", size(&s));
    
    while (size(&s) > 0) {
        printf("%d ", pop(&s));  
    }
    printf("\n");  

    freeStack(&s);  

    return 0;
}
