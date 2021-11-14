/*
Explore qsort() function. Use qsort() to sort a set of integers, a set floating point numbers and a set of 
names (strings) in ascending order by a single program.
CODE BY 2020ITB028_RUPAYAN THAKUR
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmpstring(const void* p1, const void* p2)
{
 const char** a= (const char**)p1;
 const char** b= (const char**)p2;
 return strcmp(*a, *b);
}
int cmpint(const void* p1, const void* p2)
{
 const int* a= (const int*)p1;
 const int* b= (const int*)p2;
 return *a-*b;
}
int cmpfloat(const void* p1, const void* p2)
{
 const float* a= (const float*) p1;
 const float* b= (const float*) p2;
 return (int)((*a-*b)*1000.0f);
}
void main()
{
 char* arr[]= {"APPLE", "MANGO", "BANANA", "CUCUMBER", "LITCHI", "PAPAYA"};
 int arr2[]= {24, 453, 344, 12, 789, 123, 56, 433, 356};
 float arr3[]= {214.23f, 45213.34f, 1342.789f, 1423.56f, 43.356f};
 qsort(arr, 6, sizeof(char*), cmpstring);
 qsort(arr2, 9, sizeof(int), cmpint);
 qsort(arr3, 5, sizeof(float), cmpfloat);
 for(int i=0; i<6; i++)
 printf("%s ", arr[i]);
 printf("\n");
 for(int i=0; i<9; i++)
 printf("%d ", arr2[i]);
 printf("\n");
 for(int i=0; i<5; i++)
 printf("%f ", arr3[i]);
}