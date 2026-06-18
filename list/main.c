#include "list.h"
#include <stdio.h>
int main(){
    Node *head = NULL;

    insertTail(&head,1);
    insertTail(&head,2);
    insertHead(&head,3);

    //deleteNode(&head,1);

    //printList(head);
    //printf("%d\n",findNode(head,2)->data);
    //freeList(&head);
    printList(head);
    printf("Hello,Git！"\n);

    return 0;
}
