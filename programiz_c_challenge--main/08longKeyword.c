#include <stdio.h>
int main() {
    int a;
    long b;
    long long c;
    double e;
    long double f;

    printf("int = %zu bytes \n", sizeof(a));
    printf("long int = %zu bytes\n", sizeof(b));
    printf("long long int = %zu bytes\n", sizeof(c));
    printf("double = %zu bytes\n", sizeof(e));
    printf("long double = %zu bytes\n", sizeof(f));
    
    return 0;
}
