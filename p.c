#include<stdio.h>
int main(void)
{
    char c;
    int n, x, y;
    printf("Enter the number: \n");
    scanf("%d", &n);
    y = 1;
    while(y <= n)
    {
        x = 1;
        c = 'A';
        while(x <= y)
        {

            printf("%c", c);
            c = c + 1;
            x = x + 1;
        }
        y = y + 1;
        printf("\n");
    }
}
