#include <stdio.h>

struct student {
    int id;
    char name[20];
};

int main() {
    struct student s1 = {101, "Anu"};
    struct student *p;

    p = &s1;      // pointer to structure

    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("ID = %d\n", (*p).id);

    return 0;
}

