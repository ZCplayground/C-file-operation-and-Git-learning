#include<stdio.h>
int main()
{
    char c;
    int count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c  == '\n')
            count++;
        else
            continue;
    }
    printf("%d\n", count);
    return 0;
}