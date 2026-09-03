#include<stdio.h>
int main (void)
{
    int d, m, y, i = 0, leap;

    printf("Enter your birthdate: \n");
    scanf("%d %d %d", &d, &m, &y);
     leap = (y % 4 == 0);
    switch(m)
    {
        case 1: /*jan*/
        i = d;
        break;
        case 2: /*Feb*/
        i = 31 + d;
        break;
        case 3: /*March*/
        i = 31 + 28 + d;
        break;
        case 4: /*April*/
        i = 31 + 28 + 31 + d;
        break;
        case 5: /*May*/
        i = 31 + 28 + 31 + 30 + d;
        break;
        case 6: /*June*/
        i = 31 + 28 + 31 + 30 + 31 + d;
        break;
        case 7: /*July*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + d;
        break;
        case 8: /*August*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
        break;
        case 9: /*Sept*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
        break;
        case 10: /*Oct*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
        break;
        case 11: /*Nov*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
        break;
        case 12: /*Nov*/
        i = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
        break;
    }
    if (leap && m > 2)
    i += 1;

    printf("Your julian day is %d\n", i);
}
