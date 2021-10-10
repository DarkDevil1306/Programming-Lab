#include <stdio.h>

void main()
{
    char s[100];
    printf("Enter any string to check palindrome: ");
    fflush(stdin);
    scanf("%s", s);

    int sz= 0;
    for(int i= 0; s[i]!='\0'; i++)
        sz++;
    
    char revs[100]; int j= 0;
    for(int i= sz-1; i>=0; i--)
        revs[j++]= s[i];
    revs[j]= '\0';

    int flag= 1;
    for(int i= 0; i<sz; i++)
        if(s[i]!=revs[i])
            flag= 0;
            
    if(flag)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
        
}
