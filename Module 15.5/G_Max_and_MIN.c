#include<stdio.h>
void minmax(int a[],int n){
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d %d",min,max);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int min,max;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    minmax(a,n);
    return 0;
}