# include <stdio.h>;

void main()
{
char s[100];
printf("Enter any string to find its length: ");
fflush(stdin);
scanf("%s", s);
int sz= 0;
for(int i= 0; s[i]!='\0'; i++)
sz++;

printf("Length of string is: %d", sz);
}