#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/list.h"

/**
 * 将指定学生添加到链表中，尾端
 * */
void append2list(NODE *list, STUDENT *student){
    assert(student != NULL && list != NULL);
    NODE *new_node = create_node(student);
    //将当前链表的链表尾指向新的节点
    //循环链表，找到尾节点
    NODE *tail = list;
    while(tail -> next != NULL){
        //将tail指向tail的下一个节点
        tail = tail -> next;
    }
    tail->next = new_node;
}

void print_student_line(STUDENT *student){
    if(student == NULL){
        return;
    }
    printf("|%-20s|%-20s|%-20d|\n", student -> no, student -> name, student -> gender);
}

/**
 * 打印链表内容
 * */
void print_list(NODE *list){
    //表头
    printf("|===================|===================|===================|\n");
    printf("|%*s|%*s|%*s|\n", 20, "学号", 20, "姓名", 20, "性别");
    NODE *cursor = list;
    while (cursor != NULL)
    {
        print_student_line(cursor->student);
        cursor = cursor -> next;
    }
    printf("|===================|===================|===================|\n");
}

/**
 * 搜索学号
 * */
STUDENT *search_list(NODE *list, char *no){
    STUDENT *result = NULL;
    NODE *cursor = list;
    while( cursor != NULL){
        if(cursor -> student != NULL && strcmp(cursor -> student -> no, no) == 0){
            result = cursor -> student;
            break;
        }
        cursor = cursor -> next;
    }
    return result;
}

/**
 * 删除指定的学生信息
 * */
void delete_from_list(NODE *list, STUDENT *student){
    //待删除的节点
    NODE *result = NULL;
    NODE *cursor = list;
    //当前节点的前一个节点
    NODE *previous = NULL;
    while( cursor != NULL){
        if(cursor -> student != NULL && strcmp(cursor -> student -> no, student -> no) == 0){
            //找到待删除的节点，将该节点的前一个节点的next指针，指向该节点的下一个节点
            previous -> next = cursor -> next;
            result = cursor;
            break;
        }
        previous = cursor;
        cursor = cursor -> next;
    }
    free(result);
}

/**
 * 创建链表
 * */
NODE *create_list(){
    NODE *header = (NODE*)malloc(sizeof(NODE));
    header -> next = NULL;
    header -> student = NULL;
    return header;
}

/**
 * 计算链表的长度，节点数量
 * */
unsigned int count_list(NODE *list){
    int count = 0;
    NODE *cursor = list;
    while(cursor -> next != NULL){
        cursor = cursor -> next;
        count++;
    }
    return count;
}