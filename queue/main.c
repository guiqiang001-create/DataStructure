#include <stdio.h>
#include "queue.h"

int main(){
    Queue q;
    queue_init(&q);
    queue_push(&q,1);
    queue_push(&q,2);
    queue_push(&q,3);
    int pop_val = 0;
    while(!queue_empty(&q)){
        queue_pop(&q,&pop_val);
        printf("%d\n",pop_val);
    }

    printf("你好！！");
    return 0;
}