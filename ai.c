#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    if (n < 0)
    {
        printf("Error");
    }
    else if (n == 0)
    {
        printf("No");
    }
    else if (n % 3 == 0)
    {
        printf("Up");
    }
    else if (n % 5 == 0)
    {
        printf("Go");
    }
    else if (n % 7 == 0)
    {
        printf("!!");
    }
    else
    {
        printf("No");
    }

    return 0;
}
