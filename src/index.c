#include "../include/index.h"
#include "../include/query.h"
#include "../include/create.h"
#include "../include/update.h"
#include "../include/delete.h"
#include "../include/search.h"

/**
 * 打印索引信息
 * */
void print_index(){
    system("clear");
    printf("========================================================\n");
    printf("|%*s%s%*s|\n", 20, "", "1.查询学生列表", 20, "");
    printf("|%*s%s%*s|\n", 20, "", "2.添加学生信息", 20, "");
    printf("|%*s%s%*s|\n", 20, "", "3.修改学生信息", 20, "");
    printf("|%*s%s%*s|\n", 20, "", "4.删除学生信息", 20, "");
    printf("|%*s%s%*s|\n", 20, "", "5.搜索学生信息", 20, "");
    printf("|%*s%s%*s|\n", 22, "", "6.退出程序", 22, "");
    printf("=======================================================\n");
    dispatch_request();
}

/**
 * 根据用户输入，转发用户请求
 * */
void dispatch_request(){
    int input = 0;
    while(input <= 0 || input >= 6){
        printf("请输入正确的序号来执行对应的操作: ");
        int result = scanf("%d", &input);
        //清空缓冲区，避免无限循环
        getchar();
        if(result >= 1){
            printf("输入成功%d\n", input);
            break;
        }
    }
    handlers[input - 1]();
}

void graceexit(){
    exit(0);
}

void init_handlers(){
    handlers[0] = query_student_guide;
    handlers[1] = create_student_guide;
    handlers[2] = update_student_guide;
    handlers[3] = delete_student_guide;
    handlers[4] = search_student_guide;
    handlers[5] = graceexit;
}
