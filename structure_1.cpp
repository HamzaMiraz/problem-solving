#include <stdio.h>
#include <string.h>

struct account {
    float paid;
    float due;
    float waiver;
};

// Defining a structure
struct student {
    int ID;
    int intake;
    int section;
    char name[50];
    struct account acc;
};


// Taking structure as a parameter in function
void print_struct(struct student p) {
    // Printing structure variable output
    printf("ID  :     %d\n", p.ID);
    printf("Int.:     %d\n", p.intake);
    printf("Sec.:     %d\n", p.section);
    printf("name:     %s\n", p.name);

    printf("Paid:     %.3f\n", p.acc.paid);
    printf("Due :     %.3f\n", p.acc.due);
    printf("Waiv:     %.3f\n", p.acc.waiver);
}


int main() {
    // Creating a strucure variable
    struct student s;

    // Input/assigning of a structure variable
    scanf("%d", &s.ID);
    s.intake = 48;
    s.section = 1;
    strcpy(s.name, "ABC DEF");

    s.acc.paid = 1200;
    s.acc.due = 900;
    s.acc.waiver = 200;

    // Value modificatio of structure variable
    s.ID = s.ID * 10;

    // Passing structure as parameter
    print_struct(s);

    // Copy/define value from structure
    struct student p;

    p = s;
    printf("\n");
    print_struct(p);

    // Building an array of structure
    struct student st[100];

    scanf("%d", &st[0].intake);
    printf("%d", st[0].intake);

    return 0;
}
