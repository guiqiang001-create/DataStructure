#include "queue.h"

void queue_init(Queue *q){
    q->front = q->front = 0;
}

int queue_empty(Queue *q){
    return q->front == q->rear;
}

int queue_full(Queue *q){
    return q->front == (q->rear + 1)%QUEUE_SIZE;
}

int queue_push(Queue *q,int val){
    //队满
    if(queue_full(q)){
        return -1;
    }

    q->data[q->rear] = val;
    q->rear = (q->rear + 1) % QUEUE_SIZE;
    return 0;
}

int queue_pop(Queue *q,int *pop_val){
    if(queue_empty(q)){
        return -1;
    }
    *pop_val = q->data[q->front];
    q->front = (q->front + 1) % QUEUE_SIZE;
    return 0;;
}