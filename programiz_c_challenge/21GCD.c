#include <stdio.h>
int main()
{
    int a=12, b=4, i, gcd=1;
    
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd*= i;
    }

    printf("G.C.D: %d", gcd);

    return 0;
}
