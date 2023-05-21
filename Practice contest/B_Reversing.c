#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            int start=0;
            int end=i;
            while(start < end){
            int temp=a[start];
            a[start]=a[end-1];
            a[end-1]=temp;
            start++;
            end--;
            }
            start=0;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}