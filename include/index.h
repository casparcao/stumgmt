#ifndef __INDEX_HEAD__
#define __INDEX_HEAD__
#include <stdio.h>
#include <stdlib.h>

/**
 * 声明一个函数指针，指向void xxx()的函数
 * */
typedef void (*handle_function_ptr)();

/**
 * 声明一个函数指针数组，用于存放所有的处理函数
 * */
handle_function_ptr handlers[5];

extern void print_index();

extern void dispatch_request();

extern void init_handlers();
#endif