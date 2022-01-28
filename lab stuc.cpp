#include <stdio.h>
#include <string.h>

// Defining a structure
struct student {
    int ID;
    int intake;
    int section;
    char name[50];
};


// Taking structure as a parameter in function
void print_struct(struct student p) {
    // Printing structure variable output
    printf("ID  :     %d\n", p.ID);
    printf("Int.:     %d\n", p.intake);
    printf("Sec.:     %d\n", p.section);
    printf("name:     %s\n", p.name);
}


int main() {
    // Creating a strucure variable
    struct student s;

    // Input/assigning of a structure variable
    scanf("%d", &s.ID);
    s.intake = 48;
    s.section = 1;
    strcpy(s.name, "ABC DEF");

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

    //scanf("%d", &st[0].intake);
    //printf("%d", st[0].intake);

    return 0;
}
