#include<stdio.h>

int main(){
    int n;
    int a;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[i]=1;
            printf("%d ", arr[i]);
        }
        else if(arr[i]<0){
            arr[i]=2;
            printf("%d ", arr[i]);
        }
        else{
            arr[i]=0;
            printf("%d ", arr[i]);
        }
    }
    return 0;
}