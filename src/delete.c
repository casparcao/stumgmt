#include "../include/delete.h"
#include "../include/search.h"
#include "../include/list.h"
#include "../include/index.h"
#include <string.h>
#include <stdlib.h>

void delete_student_guide(){
    STUDENT *update = do_search_student();
    if(update != NULL){
        char confirm[3] = "";
        while (confirm[0] == '\0')
        {
            printf("请输入'yes'以确认删除该学生信息。");
            int r = scanf("%s", confirm);
            getchar();
            if (r >= 1)
            {
                break;
            }
        }
        if(strcmp(confirm, "yes") == 0){
            //执行删除
            extern NODE *student_list;
            delete_from_list(student_list, update);
            printf("删除成功\n");
        }
    }
    printf("按任意键返回...\n");
    getchar();
    print_index();
}