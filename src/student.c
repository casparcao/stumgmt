#include "../include/student.h"
#include <stdlib.h>
#include <stdio.h>


STUDENT *create_student(char *no, char *name, enum GENDER gender){
    STUDENT *student = (STUDENT*)malloc(sizeof(STUDENT));
    student -> no = no;
    student -> name = name;
    student -> gender = gender;
    return student;
}

void student2string(STUDENT *student){
    if(student == NULL){
        return;
    }
    printf("{no: %s, name: %s, gender: %d}\n", student->no, student->name, student->gender);
}