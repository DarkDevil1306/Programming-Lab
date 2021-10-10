#include <stdio.h>
double fac(int n)
{
    if(n<=1)
    return 1;
    return n*fac(n-1);
}
void main()
{
    int num;
    printf("\nENTER A POSITIVE INTEGER : ");
scanf("%d",&num);
printf("\nFACTORIAL IS: %f\n",fac(num));
}