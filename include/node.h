#ifndef __NODE_HEAD__
#define __NODE_HEAD__
#include "../include/student.h"

//学生链表节点
typedef struct node{
    //节点中存储的内容
    STUDENT *student;
    //指向下一个节点的指针
    struct node *next;
} NODE;

extern NODE *create_node(STUDENT *student);
#endif