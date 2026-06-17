#ifndef LIST_H
#define LIST_H

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

//创建节点
Node *creatNode(int data);

//头插法
void insertHead(Node **head,int data);

//尾插法
void insertTail(Node **head,int data);

//遍历链表
void printList(Node *head);

//查找节点
Node *findNode(Node *head,int data);

//删除节点
void deleteNode(Node **head,int data);

//释放链表
void freeList(Node **head);

#endif