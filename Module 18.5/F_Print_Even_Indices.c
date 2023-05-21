#include<stdio.h>
void array(int a[],int n){
    if(n<0) return;
    if((n-1)%2==0){
        printf("%d ",a[n-1]);
    }
    array(a,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    array(a,n);
    return 0;
}