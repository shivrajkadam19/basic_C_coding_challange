#include <stdio.h>
int main() {
    char n;
    scanf("%d", &n);
    int sum=0;
    while (n!=0){
        sum+=n;
        n--;
    }
    printf("sum: %d",sum);
    
    return 0;
}