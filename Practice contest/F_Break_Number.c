#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int a;
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a);
        int count=0;
        while(a%2==0){
            count++;
            a=a/2;
        }
        if(max<count){
            max = count;
        }
    }
    printf("%d",max);
    return 0;
}