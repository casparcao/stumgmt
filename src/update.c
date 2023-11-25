#include "../include/update.h"
#include "../include/search.h"
#include "../include/index.h"

void update_student_guide(){
    STUDENT *update = do_search_student();
    if(update != NULL){
        char name[10] = "";
        int gender;
        while(name[0] == '\0'){
            printf("请输入新的姓名（2-10个字符）：");
            int r = scanf("%s", name);
            getchar();
            if(r >= 1){
                break;
            }
        }
        while(gender){
            printf("请输入新的性别（奇数=男；偶数=女）：");
            int r = scanf("%d", &gender);
            getchar();
            if(r >= 1){
                break;
            }
        }
        enum GENDER gender_enum = MAIL;
        switch (gender%2){
            case 0:
                gender_enum = FEMAIL;
                break;
            default:
                gender_enum = MAIL;
                break;
        }
        update -> name = name;
        update -> gender = gender_enum;
        printf("更新成功。\n");
    }
    printf("按任意键返回...\n");
    getchar();
    print_index();
}