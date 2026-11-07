#include <stdio.h>

int main(void)
{
    int n;
    int printed = 0;
    
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error");
    }
    else
    {
        if (n % 3 == 0)
        {
            printf("Up");
            printed = 1;
        }

        if (n % 5 ==0)
        {
            printf("Go");
                printed = 1;
        }

        if (n % 7 == 0)
        {
            printf("!!");
            printed = 1;
        }

        if (printed == 0)
        {
            printf("No");
        }
    }
    return 0;
}
