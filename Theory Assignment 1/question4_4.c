#include<stdio.h>
#include<limits.h>
void noReturn_noParameter(){
    int n,a;
    scanf("%d", &n);
    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        scanf("%d", &a);
        if(a>max){
            max=a;
        }
    }   
    printf("Maximum number is - %d\n",max);
}
int main(){
    noReturn_noParameter();
    return 0;
}