/*
Write a single function that will take two arguments a, b to find a^b. 
The argument a can be either integer or floating point number.
CODE BY 2020ITB028_RUPAYAN THAKUR
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double power(void* a, int b, int ch)
{
    if(ch==1)
        return pow((*(int*)a), b);
    if(ch==2)
        return pow((*(float*)a), b);
}

int main()
{
    int ch;
    printf("Enter 1 for INTEGER input\nEnter 2 for FLOATING POINT input\n");
    scanf("%d", &ch);
    void* inp= malloc(4);
    int b;
    switch(ch)
    {
        case 1: printf("ENTER AN INTEGER: ");
                scanf("%d", inp);
                break;
        case 2: printf("ENTER A FLOAT: ");
                scanf("%f", inp);
    }
    printf("ENTER THE SECOND INPUT: ");
    scanf("%d", &b);
    printf("%lf", power(inp, b, ch));

    return 0;
}