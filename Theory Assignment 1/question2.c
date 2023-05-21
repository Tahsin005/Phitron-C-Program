#include<stdio.h>

int main(){
    int n,s;
    scanf("%d",&n);
    s=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",i);
        }
        s--;
        printf("\n");
    }
    return 0;
}