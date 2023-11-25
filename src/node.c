#include "../include/node.h"
#include <stdlib.h>

/**
 * 创建节点
 * */
NODE *create_node(STUDENT *student){
    NODE *node = (NODE*)malloc(sizeof(NODE));
    node -> student = student;
    return node;
}