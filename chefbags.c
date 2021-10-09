#include <stdio.h>

struct weight
{
    int A;
    int B;
    int C;
    int D;
    int E;
};

void main()
{
    int T, i, temp, x, y, z;
    printf("Enter the no. of Test Cases\n");
    scanf("%d", &T);
    struct weight s[T];
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d", &s[i].A, &s[i].B, &s[i].C, &s[i].D, &s[i].E);
    }
    for (int j = 0; j < T; j++)
    {
        if (s[j].A <= 10 && s[j].B<= 10 && s[j].C <= 10 && s[j].D >= 15 && s[j].D <= 20 && s[j].E >= 5 && s[j].E <= 10)
        {
            x = s[j].A;
            y = s[j].B;
            z = s[j].C;
            temp = x < y ? x : y;
            z = temp < z ? temp : z;
            if (temp < z)
            {
                if (s[j].A < s[j].B)
                    s[j].A = s[j].C;
                if (s[j].B < s[j].A)
                    s[j].B = s[j].C;
            }
            s[j].C = z;
            {
                if (s[j].A + s[j].B <= s[j].D && s[j].C <= s[j].E)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
        else
            printf("No\n");
    }
}