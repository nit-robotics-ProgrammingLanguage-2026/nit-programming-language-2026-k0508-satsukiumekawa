#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    // n が負のとき「Error」
    if (n < 0)
    {
        printf("Error");
        return 0;
    }

    // n が 0 のとき「No」
    if (n == 0)
    {
        printf("No");
        return 0;
    }

    int matched = 0;

    // 3の倍数なら「Up」
    if (n % 3 == 0)
    {
        printf("Up");
        matched = 1;
    }

    // 5の倍数なら「Go」
    if (n % 5 == 0)
    {
        printf("Go");
        matched = 1;
    }

    // 7の倍数なら「!!」
    if (n % 7 == 0)
    {
        printf("!!");
        matched = 1;
    }

    // どれにも当てはまらなければ「No」
    if (matched == 0)
    {
        printf("No");
    }

    return 0;
}
