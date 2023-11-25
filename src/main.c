#include <stdio.h>
#include "../include/list.h"
#include "../include/index.h"

//全局变量，用于存储创建的用户信息
NODE *student_list = NULL;

void main(void){
    student_list = create_list();
    init_handlers();
    print_index();
}