#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Account{
    char Paid[10],Due[10];
    int Weaver,Last_Transaction;
};
struct student{
    char ID[20];
    char Name[20];
    int Intake;
    int Section;
    struct Account Account_Info;
};
student ar[30];
int main()
{
    int N;
    printf("Number of students\n"),scanf("%d\n",&N);
    for(int i=0;i<N;i++){
    scanf("%s",ar[i].ID);
    scanf(" %[^\n]",ar[i].Name);
    scanf("%d",&ar[i].Intake);
    scanf("%d",&ar[i].Section);
    scanf("%s",ar[i].Account_Info.Paid);
    scanf("%s",ar[i].Account_Info.Due);
    scanf("%d",&ar[i].Account_Info.Weaver);
    scanf("%d",&ar[i].Account_Info.Last_Transaction);
}
    for(int i=0;i<N;i++){
        printf("ID: %s\t",ar[i].ID);
        printf("Name: %s\t",ar[i].Name);
        printf("Intake: %d\t",ar[i].Intake);
        printf("Section: %d\n",ar[i].Section);
        printf("Paid: %s\t",ar[i].Account_Info.Paid);
        printf("Due: %s\t",ar[i].Account_Info.Due);
        printf("Weaver: %d\t",ar[i].Account_Info.Weaver);
        printf("Last Transaction:%d\n",ar[i].Account_Info.Last_Transaction);
    }
    return 0;
}
