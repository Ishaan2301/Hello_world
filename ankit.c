#include <stdio.h>
void main()
{
    int j = 1;
    int rating[2][5];

    for (int i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("Enter the rating of teacher %d of school %d\n", i, j);
            scanf("%d", &rating[i][j]);
        }
        j = 1;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("%d ", rating[i][k]);
        }
        printf ("\n");
    }
}