#include<stdio.h>

int main(){
    int n,sumeven=0, sumodd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
    printf("%d %d",sumeven,sumodd);
    return 0;
}