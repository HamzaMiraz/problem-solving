#include<stdio.h>

int main()
{
	char ch;
	char i;

	printf("Enter the character :");
	scanf("%c", &ch);

	if('a'<= ch && ch <= 'z')
	{
		ch = ch - 'a' + 'A';
		printf("The capital latter of the alphabet is : %c", ch);
	}
	/*if('A'<=ch && ch>= 'Z')
	{
		i = ch;
		printf("%c is already a capital later", i);
	}
	/*else
	{
		printf("The character is not an alphabet.");
	}*/

	return 0;
}
