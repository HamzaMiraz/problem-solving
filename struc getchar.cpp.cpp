#include <stdio.h>
#include <string.h>

struct student
{
    int ID;
    char Name[50];
    int Section;
    int Intake;
};

int main()
{
    struct student info[10];
    for(int i=0; i<3; i++)
    {
        printf("ENTER STUDENT ID:");
        scanf("%d",&info[i].ID);
        printf("ENTER STUDENT NAME:");
        ///getchar();// integer input newer pore jodi string nite chai tahole string input newer age getchar() dite hobe
        scanf(" %[^\n]",info[i].Name);///integer input newer pore jodi string nite chai tahole string input newer age eakta space dite  hobe
        printf("ENTER STUDENT INTAKE:");
        scanf("%d",&info[i].Intake);
        printf("ENTER STUDENT SECTION:");
        scanf("%d",&info[i].Section);
        puts("\n");

    }
    for(int i=0; i<3; i++)
    {
        printf("ID: %d\n",info[i].ID);
        printf("NAME: %s\n",info[i].Name);
        printf("INTAKE:%d\n",info[i].Intake);
        printf("SECTION:%d\n",info[i].Section);
        printf("\n");
    }

    return 0;
}
