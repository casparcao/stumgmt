#include "../include/create.h"
#include "../include/list.h"
#include "../include/index.h"

void create_student_guide(){
    char no[10] = "";
    char name[10] = "";
    int gender;
    while(no[0] == '\0'){
        printf("请输入学号（2-10个字符）：");
        int r = scanf("%s", no);
        getchar();
        if(r >= 1){
            break;
        }
    }
    while(name[0] == '\0'){
        printf("请输入姓名（2-10个字符）：");
        int r = scanf("%s", name);
        getchar();
        if(r >= 1){
            break;
        }
    }
    while(gender){
        printf("请输入性别（奇数=男；偶数=女）：");
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
    STUDENT *s1 = create_student(no, name, gender_enum);
    extern NODE *student_list;
    append2list(student_list, s1);
    printf("创建成功，按任意键返回...\n");
    getchar();
    print_index();
}