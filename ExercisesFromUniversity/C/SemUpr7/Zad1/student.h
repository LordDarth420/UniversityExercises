#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct Student
{
    char firstName[15], middleName[15], lastName[15];
    char classNumber[5];
    int mathMarks[10], bgMarks[10], ITMarks[10];
}Student;
#endif // STUDENT_H_INCLUDED
