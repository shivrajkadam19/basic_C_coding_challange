#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    printf("fact: %d", fact);

    return 0;
}