#include "../include/search.h"
#include "../include/index.h"
#include "search.h"

void search_student_guide(){
    do_search_student();
    printf("按任意键继续...\n");
    getchar();
    print_index();
}

STUDENT *do_search_student()
{
    char no[10] = "";
    while (no[0] == '\0')
    {
        printf("请输入搜索学号（2-10个字符）：");
        int r = scanf("%s", no);
        getchar();
        if (r >= 1)
        {
            break;
        }
    }
    extern NODE *student_list;
    STUDENT *result = search_list(student_list, no);
    if (result == NULL)
    {
        printf("未找到学号为%s的学生。", no);
    }
    else
    {
        printf("学号：%s\n", result->no);
        printf("姓名：%s\n", result->name);
        printf("性别：%d\n", result->gender);
    }
    return result;
}