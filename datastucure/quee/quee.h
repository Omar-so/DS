#ifndef QUEE_H
#define QUEE_H
#define MAX 100

struct q {
    int front;
    int rear;
    int *arr;
    int size;
};

void createQUEE(struct q *q);
int isempty(struct q *q);
int isfull(struct q *q);
void enquee(struct q *q, int item);
void dequee(struct q *q);
int getavgqueue(struct q *q);

#endif
