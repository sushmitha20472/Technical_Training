#include <stdio.h>

// Structure
struct Student {
    int roll;
    char name[20];
};

// Union
union Data {
    int i;
    float f;
};

int main() {
    struct Student s1 = {1, "John"};
    union Data d;
    d.i = 10;

    printf("Student roll: %d, name: %s\n", s1.roll, s1.name);
    printf("Union int value: %d\n", d.i);
    return 0;
}

