#include<stdio.h>

int main()
{
int i, j, A[10][10], B[10][10], C[10][10], D[10][10], noOfRow, noOfCol;


printf("Enter Number of Row: ");
scanf("%d", &noOfRow);

printf("Enter Number of Col: ");
scanf("%d", &noOfCol);

//scanning A
    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        printf("Enter A[%d][%d]: ", i, j);
        scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
  
 //Scanning B
    i=0;
    do{
        j=0;
        do{
        printf("Enter B[%d][%d]: ", i, j);
        scanf("%d", &B[i][j]);
        j++;
        }while(j<noOfCol);
    i++;
    printf("\n");
    }while(i<noOfRow);


//Printing A
    printf("Matrix A:\n\n");
    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        printf("%d ", A[i][j]);
        }
        printf("\n");
    }


//Printing B
    printf("Matrix B:\n\n");
    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        printf("%d ", B[i][j]);
        }
        printf("\n");
    }


//Adding A and B
printf("\n\n\nSum Of A and B is:\n\n ");

    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        C[i][j] = A[i][j] + B[i][j];
        }
    }
  

//Printing A and B

    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        printf("%d ", C[i][j]);
        }
    printf("\n");
    }
  

//Subtraction of A and B
printf("\n\n\nSubtraction Of A and B is:\n\n ");

    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        D[i][j] = A[i][j] - B[i][j];
        }
    }
  

//Printing A and B

    for(i=0; i<noOfRow; i++)
    {
        for(j=0; j<noOfCol; j++)
        {
        printf("%d ", D[i][j]);
        }
    printf("\n");
    }
  

return 0;
}
