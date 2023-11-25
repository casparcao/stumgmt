#ifndef __LIST_HEAD__
#define __LIST_HEAD__
#include "../include/node.h"

extern void append2list(NODE *list, STUDENT* student);

extern void print_list(NODE *list);

extern NODE *create_list();

extern unsigned int count_list(NODE *list);

extern STUDENT *search_list(NODE *list, char *no);

extern void delete_from_list(NODE *list, STUDENT *student);

#endif