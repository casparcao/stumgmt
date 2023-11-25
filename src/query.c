#include "../include/query.h"
#include "../include/index.h"

void query_student_guide(){
    extern NODE *student_list;
    print_list(student_list);
    printf("按任意键继续...\n");
    getchar();
    print_index();
}