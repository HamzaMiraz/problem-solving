#include <stdio.h>

int main() {
    char ch;

    printf("Enter a charachter: ");

    scanf("%c", &ch);

    printf("The output is: %c %d\n", ch, ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("This is a vowel\n");
    }
    else {
        printf("This is a consonant\n");
    }

    return 0;
}
