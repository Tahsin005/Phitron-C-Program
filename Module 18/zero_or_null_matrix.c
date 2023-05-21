#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int element=n*m;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }
    if(element==count) printf("Zero or null matrix");
    else printf("Not a zero or null matrix");
    return 0;
}