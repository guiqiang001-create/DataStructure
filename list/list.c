#include "list.h"
#include <stdio.h>
#include <stdlib.h>
//创建节点
Node *creatNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//头插法
void insertHead(Node **head,int data){
    Node *newNode = creatNode(data);

    newNode->next = *head;
    *head = newNode;
}

//尾插法
void insertTail(Node **head,int data){
    Node *newNode = creatNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node *p = *head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = newNode;
}

//遍历链表
void printList(Node *head){
    Node *p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}
//查找节点
Node *findNode(Node *head,int data){
    Node *p = head;
    while(p != NULL){
        if(p->data == data){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

//删除节点
void deleteNode(Node **head,int data){
    Node *cur = *head;
    Node *pre = NULL;
    while(cur != NULL){
        if(cur->data == data){
            if(pre == NULL){
                *head = cur->next;
            }
            else{
                pre->next = cur->next;
            }
            free(cur);
            return;
        }
        pre = cur;
        cur = cur->next;
    }
}

//释放链表
void freeList(Node **head){
    Node *p = *head;
    while(p != NULL){
        Node *temp = p;
        p = p->next;
        free(temp);
    }
    *head = NULL;
}