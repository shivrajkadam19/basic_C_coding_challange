#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    while (a!=0){
        count++;
        a/=10;
    }
    printf("%d",count);
    return 0;
}