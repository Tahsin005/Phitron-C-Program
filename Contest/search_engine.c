#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int j=1;j<=test;j++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int x;
        scanf("%d",&x);
        int flag=0;
        int count=0;
        for(int k=0;k<n;k++){
            if(x==a[k]){
                count=k;
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("Case %d: %d\n",j,count+1);
        }
        else{
            printf("Case %d: Not Found\n",j);
        }
    }
    return 0;
}