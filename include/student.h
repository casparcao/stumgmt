#ifndef __STUDENT_HEAD__
#define __STUDENT_HEAD__
//性别枚举
enum GENDER{
    MAIL, FEMAIL
};
typedef struct student{
    //学号
    char *no;
    //姓名
    char *name;
    //性别
    enum GENDER gender;
} STUDENT;

extern STUDENT *create_student(char *no, char *name, enum GENDER gender);

extern void student2string(STUDENT *student);
#endif