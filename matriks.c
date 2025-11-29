#include <stdio.h>
#define MAX 50
int main ()
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    printf("masukkan baris dan kolom matriks a: ");
    scanf("%d %d", &arows, &acolumns);

    printf("masukkan baris dan kolom matriks a:\n");
    for(i=0; i<arows;i++)
    {
        for(j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("masukkan baris dan kolom matriks b: ");
    scanf("%d %d", &brows, &bcolumns);

    printf("masukkan baris dan kolom matriks b:\n");
    if(brows != acolumns)
    {
        printf("maaf, kami tidak bisa mengalikan matriks a dan b");
    }else
    {
        for(i=0; i<arows; i++)
        {
            for(j=0; j<bcolumns; j++)
            {
                for(k=0; k<brows; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                product [i][j] = sum;
                sum=0;
            }
        }

        printf("hasil perkalian matriks: ");
        for(i=0; i<arows; i++)
        {
            for(j=0; j<bcolumns; j++)
            {
                printf("%d", product[i][j]);
            }
            printf("\n");
        }
    }



    return 0;
}