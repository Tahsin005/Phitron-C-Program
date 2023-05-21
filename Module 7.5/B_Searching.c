#include<stdio.h>

int main(){
    int n;
    long long int a;
    long long int position=-1;
    scanf("%d", &n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &a);
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            position=i;
            break;
        }
    }
    if(position==-1){
        printf("%lld\n", position);
    }
    else{
        printf("%lld\n", position);
    }
    return 0;
}