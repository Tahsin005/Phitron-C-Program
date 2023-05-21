#include<stdio.h>
void avg(float a[],int n){
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    float sum=0.0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%0.7f",sum/(float)n);

}
int main(){
    int n;
    scanf("%d",&n);
    float a[n];
    avg(a,n);
    return 0;
}