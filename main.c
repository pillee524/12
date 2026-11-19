#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[30];
    float grade;
};

int main(void) {
    struct student s1 = {2516140, "seoyeon", 2.8};

    s1.id = 2611111;
    strcpy(s1.name, "yeonseo");

    s1.grade = 2.0;

    printf("ID : %d\n", s1.id);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);

    return 0;
}