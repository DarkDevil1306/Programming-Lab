#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool palindrome(char *h, char *l)
{ 

if(h>=l)
{
return true;
}

else
return (*h==*l)&&palindrome(++h,--l);
}

int main()
{
char str[50];
printf("Enter a word : ");
scanf("%s",str);
int l=strlen(str);
bool c=palindrome(&str[0],&str[l-1]);
if(c==false)
printf("It is Not a Palindrome \n");
else
printf("It is Palindrome \n");
return 0;
}