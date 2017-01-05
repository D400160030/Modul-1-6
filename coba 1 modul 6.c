#include<stdio.h>
main()
{
    int i,j,hasil2[2][2];
    int matriksA[2][2];
    int matriksB[2][2];
    int hasil[2][2];
    printf("Matriks A\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
    {
        printf("element[%d][%d]:",i,j);
        scanf("%d", &matriksA[i][j]);
    }
        }
 printf("Matriks B\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
    {
        printf("element[%d][%d]:",i,j);
        scanf("%d", &matriksB[i][j]);
    }
    }
    printf("Penjumlahan Matriks\n");
    for(i=0; i<2; i++)
    {
        for(j = 0;j < 2; j++)
        {
           hasil[i][j] = matriksA [i][j] + matriksB[i][j];
        printf("%d\t", hasil[i][j]);
        }

        printf("\n");
        }
    }

