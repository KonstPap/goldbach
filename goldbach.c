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
