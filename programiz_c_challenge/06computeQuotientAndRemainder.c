#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float rem  = a%b;
    float quo = a/b;
    printf("%f %f", rem, quo);
    return 0;
}