#include<stdio.h>

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
void checkPrime(int arr[],int n){
    for(int i=0;i<n;i++){
        if(isPrime(arr[i])){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    checkPrime(arr,n);
    return 0;
}
