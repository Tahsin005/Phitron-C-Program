#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum<0){
        sum=sum*(-1);
    }
    else{
        sum=sum;
    }
    printf("%lld\n", sum);
    return 0;
}