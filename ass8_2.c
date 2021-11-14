/*
Design a set of functions (such as ADD, DIV, POWER (to do x^y), etc.) 
of your choice and store them in an array of function pointers. 
Write a program that will use these functions from the array, based on the user input. 
DO NOT USE switch-case/if-else to solve this problem.
CODE BY 2020ITB028_RUPAYAN THAKUR
*/

#include <stdio.h>
#include <math.h>
int ADD(int a, int b)
{
 return a+b;
}
int DIFF(int a, int b)
{
 return a-b;
} 
int DIV(int a, int b)
{
 return a/b;
}
int POW(int x, int y)
{
 return (int) pow(x, y);
}
void main()
{
 int (*ptr1)(int, int) = &ADD;
 int (*ptr2)(int, int)= &DIFF;
 int (*fun_arr[4])(int, int)= {ptr1, ptr2, &DIV, &POW};
 int ch;
 printf("Enter:\n1 for ADD\n2 for SUBTRACT\n3 for DIVIDE\n4 for EXPONENT\n: ");
 scanf("%d", &ch);
 int a, b;
 printf("\nEnter two values: ");
 scanf("%d %d", &a, &b);
 printf("\nAnswer: %d", fun_arr[ch-1](a, b));
}