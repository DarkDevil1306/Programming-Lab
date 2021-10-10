/*
Write another program to multiply a chain of matrices. 
Use a function to multiply two matrices which is to be called from the main.
CODE BY 2020ITB028_RUPAYAN_THAKUR
*/

#include <stdio.h>
#include <stdlib.h>

struct matrix
{
    int r;
    int c;
    int** values;
};

void createMatrix(struct matrix* m, int r, int c)
{
    m->values= malloc(r*sizeof(int*));
    for(int i= 0; i<r; i++)
        m->values[i]= malloc(c*sizeof(int));
    
    m->r= r;
    m->c= c;
}

void fillValues(struct matrix* m)
{
    printf("Enter values for matrix:\n");
    for(int i= 0; i<m->r; i++)
        for(int j= 0; j<m->c; j++)
            scanf("%d", &m->values[i][j]);
}

struct matrix matMult(struct matrix* m1, struct matrix* m2)
{
    struct matrix result;
    createMatrix(&result, m1->r, m2->c);
    for(int i= 0; i<result.r; i++)
        for(int j= 0; j<result.c; j++)
        {
            result.values[i][j]= 0;
            for(int x= 0; x<m1->c; x++)
                result.values[i][j]+= m1->values[i][x]*m2->values[x][j];
        }
    return result;
}

void display(struct matrix* m)
{
    printf("\nMatrix:\n");
    for(int i= 0; i<m->r; i++)
    {
        for(int j= 0; j<m->c; j++)
            printf("%d ", m->values[i][j]);
        printf("\n");
    }
}

void main()
{
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);
    struct matrix m1, m2, result;
    int r,c;

    printf("Enter number of rows in Matrix 1: ");
    scanf("%d", &r);
    printf("Enter number of columns in Matrix 1: ");
    scanf("%d", &c);
    createMatrix(&m1, r, c);
    fillValues(&m1);

    for(int i= 2; i<=n; i++)
    {
        r= m1.c;
        printf("Enter number of columns in Matrix %d: ", i);
        scanf("%d", &c);
        createMatrix(&m2, r, c);
        fillValues(&m2);
        result= matMult(&m1, &m2);
        m1= result;
    }
    display(&result);
}