#include<stdio.h>

int main()
{
int i, j, arr[4][4];

    i=0;
    do{
        j=0;
        do{
        printf("Enter arr[%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        j++;
        }while(j<4);
      
    i++;
    printf("\n");
    }while(i<4);
  

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
        printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

return 0;
}
