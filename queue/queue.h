#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 5

typedef struct{
    int data[QUEUE_SIZE];
    int front;
    int rear;
}Queue;

void queue_init(Queue *q);

int queue_push(Queue *q,int val);

int queue_pop(Queue *q,int *pop_val);

int queue_empty(Queue *q);

int queue_full(Queue *q);

#endif