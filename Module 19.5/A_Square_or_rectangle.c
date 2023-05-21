#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int w=0,h=0;
        scanf("%d %d",&w,&h);
        if(w==h) printf("Square\n");
        else if(w!=h) printf("Rectangle\n");
    }
    return 0;
}