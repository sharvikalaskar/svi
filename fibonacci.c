 #include <stdio.h>
int main(void)
{
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");

    i = 1;
    while (i <= n)
    {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        i++;
    }

    printf("\n");
    return 0;
}
