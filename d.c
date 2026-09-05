#include<stdio.h>
int main(void)
{
    int n, i, j;
    printf("Enter the number: \n");
    scanf("%d", &n);
    j = 1;
    while(j <= n)
    {
        i = 1;
        while(i <= j)
       {
         printf("%d", i);
        i++;
       }
       printf("\n");
       j++;
    }

    j = n;
    j = j - 1;
    while(j >= 1)
    {
        i = 1;
        while(i <= j)
        {
            printf("%d", i);
            i++;
        }
        printf("\n");
        j--;
    }
}
