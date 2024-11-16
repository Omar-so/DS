#include <stdio.h>
#include <stdlib.h>
#include "quee.h"

void createQUEE(struct q *q) {
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
    q->arr = (int*)malloc(sizeof(int) * MAX);
}

int isempty(struct q *q) {
    return q->size == 0;
}

int isfull(struct q *q) {
    return q->size == MAX;
}

void enquee(struct q *q, int item) {
    if (isfull(q)) {
        printf("Queue is full\n");
    } else {
        q->rear = (q->rear + 1) % MAX;
        q->arr[q->rear] = item;
        q->size++;
    }
}

void dequee(struct q *q) {
    if (isempty(q)) {
        printf("Queue is empty\n");
    } else {
        q->front = (q->front + 1) % MAX;
        q->size--;
    }
}

int getavgqueue(struct q *q) {
   
    int sum = 0;
    int r
    for (int i = 0; i < q->size; i++) {
        sum += q->arr[q->front % MAX];
        q->front ++;
    }
    return sum / q->size;
}

int main() {
    struct q q1;
    createQUEE(&q1);

    enquee(&q1, 1);
    enquee(&q1, 2);
    enquee(&q1, 3);
    enquee(&q1, 4);
    enquee(&q1, 5);
    enquee(&q1, 6);

    printf("Average: %d\n", getavgqueue(&q1));

    return 0;
}
