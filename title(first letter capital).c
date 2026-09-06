#include<stdio.h>
void makeCap(char *str);
int main(void)
{
    char str[100];
    printf("Write the word: \n");
    scanf("%s", str);
    makeCap(str);
    printf("Result: %s", str);
}
void makeCap(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(i == 0)
        {
            if(*str >= 97 && *str <= 122)
                *str = *str - 32;
        }
        else
        {
            if(*str >= 65 && *str <= 90)
                *str = *str + 32;
        }
        str++;
        i++;
    }
}
