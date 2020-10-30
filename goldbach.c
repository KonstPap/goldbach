#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j, k, l;
    char flag, flag2;
    printf("Dose arithmo artio megalutero tou 2\n");
    scanf("%d", &n);
    if(n%2==0&&n>2)
    {
        for (i=2 ;i<n ;i++)
        {
        flag= 1;
        for (k=2 ;k<i ;k++)
            if (i % k == 0)
                flag = 0;
        if (flag)
        {
            for (j=2; j<n; j++)
            {
                flag2 = 1;
                for (l=2; l<j; l++)
                    if(j % l == 0)
                        flag2 = 0;
                if (flag2)
                    if (i + j == n)
                    {
                        printf("\n\n%d kai %d einai dio proti arithmoi pou exoun athroisma  %d\n",i ,j , n);
                        return 0;
                    }
            }
        }
    }
    }
    else
        printf("Lathos noumero");
    return 0;
}

