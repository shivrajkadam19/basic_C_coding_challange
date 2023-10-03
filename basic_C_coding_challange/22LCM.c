#include <stdio.h>
int main()
{
    int a=12, b=8;
    int max = (a>b)?a:b;
    while(1){
    	if((max%a==0) && (max%b==0)){
    		printf("%d",max);
    		break;
		}
		max++;
	}
    return 0;
}
