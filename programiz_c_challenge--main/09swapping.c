#include <stdio.h>
int main() {
    int a=5,b=2;
    printf("a:%d b:%d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("a:%d b:%d",a,b);

    
    return 0;
}
