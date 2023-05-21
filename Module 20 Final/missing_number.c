#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test;
    scanf("%d",&test);
    if(test>0){
        for(int i=1;i<=test;i++){
            unsigned int s,a,b,c;
            scanf("%u %u %u %u",&s,&a,&b,&c);
            unsigned int result=s-a-b-c;
            printf("%u",result);
            printf("\n");
        }
    }
    return 0;
}
